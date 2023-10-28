#include<stdio.h>
#include<vector>
#include<queue>
typedef std::vector<int> vi;
typedef std::pair<int,int> ii;
typedef std::vector<ii> vii;

std::vector<vii> AdjList;
vi prim_taken;
std::priority_queue<ii> pq;

void addEdge(int u, int v,int p){
    AdjList[u].push_back(std::make_pair(v,p));
    AdjList[v].push_back(std::make_pair(u,p));
}

void process(int u){
    prim_taken[u] = 1;
    for (int i = 0; i < (int)AdjList[u].size(); i++){
        ii v = AdjList[u][i];
        if(!prim_taken[v.first])
            pq.push(ii(-v.second,-v.first));
    }
    
}

int prim(){
    process(0);
    int costo_total = 0;
    while (!pq.empty()){
        ii top = pq.top();
        pq.pop();
        if(!prim_taken[-top.second]){
            costo_total += -top.first;
            process(-top.second);
        }
    }
    return costo_total;   
}

int main(){

    int V = 7;
    AdjList.assign(V, vii());
    prim_taken.assign(V,0);

    addEdge(0,1,2);
    addEdge(0,2,7);
    addEdge(0,3,6);
    addEdge(0,4,13);
    addEdge(0,5,5);
    addEdge(0,6,11);
    addEdge(1,2,4);
    addEdge(2,3,1);
    addEdge(3,4,15);
    addEdge(4,5,9);
    addEdge(5,6,3);
    addEdge(6,1,14);

    for (int i = 0; i < AdjList.size(); i++)
    {
        printf("Nodo: %d\nVecinos: ",i);
        for (int j = 0; j < AdjList[i].size(); j++)
        {
            printf("%d[p:%d] ",AdjList[i][j].first,AdjList[i][j].second);
        }
        printf("\n\n");
    }

    printf("peso total con prim: %d",prim());


    
    return 0;
}
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

    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int V,E,x,y,p;
    scanf("%d %d",&V,&E);
    AdjList.assign(V, vii());
    prim_taken.assign(V,0);

    while (E--)
    {
        scanf("%d %d %d",&x,&y,&p);
        addEdge(x,y,p);
    }

    printf("%d",prim());


    
    return 0;
}

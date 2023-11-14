#include<vector>
#include<stdio.h>
#define MAX 10000
typedef std::pair<int,int> ii;
typedef std::vector<ii> vii;

std::vector<vii> AdjList;
std::vector<int> djks_dist;

void addEdge(int u, int v,int p){
    AdjList[u].push_back(std::make_pair(v,p));
    AdjList[v].push_back(std::make_pair(u,p));
}
void djks(int u,int p){
    djks_dist[u] = p;
    for (int j = 0; j < (int)AdjList[u].size(); j++){
        int vn = AdjList[u][j].first;
        int vp = AdjList[u][j].second;
        if(djks_dist[vn] > vp + p){
            djks(vn,vp + p);
        }
    }
}

int main(){

    int V = 5;
    AdjList.assign(V, vii());
    djks_dist.assign(V,MAX);

    addEdge(0,1,5);
    addEdge(0,2,6);
    addEdge(1,3,2);
    addEdge(3,4,3);
    addEdge(2,3,0);

    for (int i = 0; i < AdjList.size(); i++)
    {
        printf("Nodo: %d\nVecinos: ",i);
        for (int j = 0; j < AdjList[i].size(); j++)
        {
            printf("%d[p:%d] ",AdjList[i][j].first,AdjList[i][j].second);
        }
        printf("\n\n");
    }

    djks(3,0);
    for (int i = 0; i < V; i++)
        printf("%d ",djks_dist[i]);
    printf("\n");
    
    
    return 0;
}
#include<vector>
#include<stdio.h>
#define MAX 10000
typedef std::pair<int,int> ii;
typedef std::vector<ii> vii;

std::vector<vii> AdjList;
std::vector<int> djks_dist;

void addEdge(int u, int v,int p){
    AdjList[u].push_back(std::make_pair(v,p));
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

    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif
    int V,E,u,j,p;
    scanf("%d %d",&V,&E);
    AdjList.assign(V, vii());
    djks_dist.assign(V,MAX);

    while (E--){
        scanf("%d %d %d",&u,&j,&p);
        addEdge(u,j,p);
        addEdge(j,u,p);
    }
    djks(0,0);
    for (int i = 1; i < V; i++)
        printf("%d ",djks_dist[i]);
    
    
    return 0;
}

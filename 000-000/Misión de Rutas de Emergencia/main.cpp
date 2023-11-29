#include<vector>
#include<stdio.h>
#define MAX 100000
typedef std::pair<int,int> ii;
typedef std::vector<ii> vii;

std::vector<vii> AdjList;
std::vector<int> djks_dist;
std::vector<int> djks_Orig;
std::vector<bool> djks_Rob;

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

    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int V,E,a,b,p;
    scanf("%d %d",&V,&E);

    AdjList.assign(V, vii());
    djks_dist.assign(V,MAX);
    djks_Orig.assign(V,MAX);
    djks_Rob.assign(V,true);

    while (E--){
        scanf("%d %d %d",&a,&b,&p);
        addEdge(a,b,p);
    }

    djks(0,0);
    djks_Orig = djks_dist;
    int orig;

    for (int i = 0; i < AdjList.size(); i++)
    {
        for (int j = 0; j < AdjList[i].size(); j++)
        {
            orig = AdjList[i][j].second;
            AdjList[i][j].second = MAX;
            djks_dist.assign(V,MAX);
            djks(0,0);
            for (int z = 1; z < V; z++)
                if(djks_dist[z] > djks_Orig[z])
                    djks_Rob[z] = false;
            AdjList[i][j].second = orig;
        }
    }
    

    for (int i = 1; i < V; i++){
        if (djks_Rob[i])
        {
            printf("El camino a optimo a %d es de largo %d y es robusto",i,djks_Orig[i]);
        }
        else
        {
            printf("El camino a optimo a %d es de largo %d y no es robusto",i,djks_Orig[i]);
        }
        printf("\n");
    }
        

    
    
    return 0;
}


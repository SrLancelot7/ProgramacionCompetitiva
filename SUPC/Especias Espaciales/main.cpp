#include<vector>
#include<stdio.h>
#include<cmath>
#define MAX 10000
typedef std::pair<int,double> id;
typedef std::vector<id> vid;

std::vector<vid> AdjList;
std::vector<double> djks_dist;
std::vector<std::pair<int,int>> coor;

double peso(int a,int b){
    double total;
    double X = coor[a].first - coor[b].first;
    double Y = coor[a].second - coor[b].second;
    total = sqrt(X*X + Y*Y);
    return total;
}

void addEdge(int u, int v,double p){
    AdjList[u].push_back(std::make_pair(v,p));
    AdjList[v].push_back(std::make_pair(u,p));
}
void djks(int u,double p){
    djks_dist[u] = p;
    for (int j = 0; j < (int)AdjList[u].size(); j++){
        int vn = AdjList[u][j].first;
        double vp = AdjList[u][j].second;
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

    int V,E,a,b;
    scanf("%d %d",&V,&E);
    AdjList.assign(V, vid());
    djks_dist.assign(V,MAX);
    coor.assign(V,std::pair<int,int>());

    for (int i = 0; i < V; i++){
        scanf("%d %d",&a,&b);
        coor[i] = std::make_pair(a,b);
    }
    while (E--){
        scanf("%d %d",&a,&b);
        addEdge(a,b,peso(a,b));
    }
    djks(0,0);
    for (int i = 1; i < V; i++)
        printf("%.4lf ",djks_dist[i]);
    printf("\n");
    
    
    return 0;
}

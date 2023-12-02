#include<stdio.h>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste


#include<vector>
#include<stdio.h>
typedef std::vector<int> vi;

std::vector<vi> AdjList;
vi dfs_num;
int critico = -1;

void addEdge(int u, int v){
    AdjList[u].push_back(v);
    //AdjList[v].push_back(u);
}

void dfs(int u){
    dfs_num[u] = 1;
    if(u == critico)
        return;
    for (int j = 0; j < (int)AdjList[u].size(); j++){
        int v = AdjList[u][j];
        if(dfs_num[v] == 0)
            dfs(v);
    }
    
}

int numConexiones(int V){
    int numCC=0;
    dfs_num.assign(V,0);
    for (int i = 0; i < V; i++)
    {
        if(i == critico){
            continue;
        }
        if(dfs_num[i] == 0){
            numCC++;
            dfs(i);
        }
    }
    return numCC;
    
}

int main(){

    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int V,E,a,b,conx;
    scanf("%d %d",&V,&E);
    AdjList.assign(V, vi());

    while (E--)
    {
        scanf("%d %d",&a,&b);
        addEdge(a,b);
        addEdge(b,a);
    }
    conx = numConexiones(V);
    for (int i = 0; i < V; i++){
        critico = i;
        int ans = numConexiones(V);
        if(ans > conx)
            printf("%d es critico\n",i);
    }

    return 0;
}

#include<vector>
#include<stdio.h>
typedef std::vector<int> vi;

std::vector<vi> AdjList;
vi dfs_num;

void addEdge(int u, int v){
    AdjList[u].push_back(v);
    //AdjList[v].push_back(u);
}

void dfs(int u){
    dfs_num[u] = 1;
    for (int j = 0; j < (int)AdjList[u].size(); j++){
        int v = AdjList[u][j];
        if(dfs_num[v] == 0)
            dfs(v);
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
    AdjList.assign(V, vi());
    dfs_num.assign(V,0);

    vi core;
    core.assign(V,0);

    while (E--)
    {
        scanf("%d %d",&a,&b);
        addEdge(a-1,b-1);
    }

    for (int i = 0; i < V-1; i++){
        dfs_num.assign(V,0);
        dfs(i);
        if(dfs_num[V-1] == 1){
            core[i] = 1;
        }
    }

    for (int i = 0; i < V; i++)
    {
        if(core[i] == 1)
            printf("%d ", i+1);
    }
    
    
    

    return 0;
}

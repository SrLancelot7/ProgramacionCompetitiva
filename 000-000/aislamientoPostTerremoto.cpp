#include<vector>
#include<stdio.h>
#include<bitset>
typedef std::vector<int> vi;

std::vector<vi> AdjList;
std::bitset<100001> dfs_num;

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
    dfs_num.reset();

    while (E--)
    {
        scanf("%d %d",&a,&b);
        a--;b--;
        addEdge(a,b);
    }

    
    dfs(0);
    for (int i = 0; i < V; i++)
    {
        if(dfs_num[i] == 0)
            printf("%d ", i+1);
    }

    return 0;
}

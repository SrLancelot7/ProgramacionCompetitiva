#include<vector>
#include<stdio.h>
typedef std::vector<int> vi;

std::vector<vi> AdjList;
vi dfs_num;
int ans;

void addEdge(int u, int v){
    AdjList[u].push_back(v);
    //AdjList[v].push_back(u);
}

void dfs(int u){
    dfs_num[u] = 1;
    for (int j = 0; j < (int)AdjList[u].size(); j++){
        int v = AdjList[u][j];
        if(dfs_num[v] == 0){
            ans++;
            dfs(v);
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

    int t,u,V,A,a,b;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&u);
        scanf("%d %d",&V,&A);

        AdjList.assign(V, vi());
        dfs_num.assign(V,0);

        ans = 0;
        while (A--)
        {
            scanf("%d %d",&a,&b);
            addEdge(a,b);
            addEdge(b,a);
        }

        dfs(u);
        printf("%d\n",ans*2);


    }
    

    return 0;
}


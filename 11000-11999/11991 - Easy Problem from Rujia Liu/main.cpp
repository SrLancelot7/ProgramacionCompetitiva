#include<stdio.h>
#include<vector>
#include<map>
typedef std::vector<int> vi;

class Grafo{
    public:
        std::map<int,vi> adjList;
        
        void addEdge(int u,int v){
            if(adjList.find(u) == adjList.end())
                adjList[u] = {v};
            else
                adjList[u].push_back(v);
        }
};
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n,m,k,v,tmp,ans;
    while (scanf("%d %d",&n,&m) != EOF){
        Grafo arr;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&tmp);
            arr.addEdge(tmp,i+1);
        }
        for (int i = 0; i < m; i++)
        {
            ans = 0;
            scanf("%d %d",&k,&v);
            if(k <= arr.adjList[v].size()){
                ans = arr.adjList[v][k-1];
            }
            printf("%d\n",ans);
        }
        
    }
    

    return 0;
}
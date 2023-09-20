#include<stdio.h>
#include<vector>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste
/*
class GrafoMatriz{
    public:
        int V;
        std::vector<std::vector<int>> adjMatriz;
        
        Grafo(int vertices){
            V = vertices;
            adjMatriz.resize(V,std::vector<int>(V,0));
        }

};
*/

class Grafo{
    public:
        int V;
        std::vector<std::vector<int>> adjList;

        Grafo(int vertices){
            V = vertices;
            adjList.resize(V);
        }
        void addEdge(int u,int v){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        
};

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n,m,a,b;
    scanf("%d %d",&n,&m);
    Grafo ciudades(n);
    while (m--){
        scanf("%d %d",&a,&b);
        ciudades.addEdge(a-1,b-1);
    }
    for (int i = 1; i < n; i++){
        if(ciudades.adjList[i].empty())
            printf("%d ",i+1);
    }
    
    
    return 0;
}
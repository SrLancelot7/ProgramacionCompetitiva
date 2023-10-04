#include<stdio.h>
#include<vector>
#include<stack>
#include <algorithm>
typedef std::vector<int> vi;


class Grafo {
    public :
        int V ;
        std::vector <vi> adjList ;

        Grafo (int vertices ){
            V = vertices ;
            adjList.resize ( V ) ;
        }
        void addEdge(int u , int v ) {
            adjList [ u ]. push_back ( v ) ;
            adjList [ v ]. push_back ( u ) ;
        }
        int DFS ( int startVertex ) {
            int visitaciones = 0;
            std::vector<bool> visited(V , false);
            std::stack<int> stack;

            stack . push ( startVertex ) ;
            visited [ startVertex ] = true ;

            while (! stack . empty () ) {
                int currentVertex = stack . top () ;
                stack . pop () ;

                for (int neighbor : adjList [ currentVertex ]){
                    if (! visited [ neighbor ]) {
                        stack . push ( neighbor ) ;
                        visited [ neighbor ] = true ;
                    }
                    visitaciones++;
                }
            }
            return visitaciones;
        }
};

int main () {

    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t,n,V,A,a,b;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        scanf("%d %d",&V,&A);
        Grafo laberinto (V);
        while (A--){
            scanf("%d %d",&a,&b);
            if(std::find(laberinto.adjList[a].begin(),laberinto.adjList[a].end(),b) == laberinto.adjList[a].end())
                laberinto.addEdge(a,b);
        }
        printf("%d\n",laberinto.DFS(n));
    }
    

    
    return 0;
}
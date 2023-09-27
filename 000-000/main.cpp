#include<stdio.h>
#include<vector>
#include<stack>
#include<map>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

class Grafo {
public :
    int V ; // numero de vertices
    vector < vector <int > > adjMatrix ;

    Grafo (int vertices ) {
        V = vertices ;
        adjMatrix.resize (V , vector <int>(V ,0));
    }
    void addEdge ( int u , int v ) {
        adjMatrix [ u ][ v ] = 1; // 1 para arista
        adjMatrix [ v ][ u ] = 1; // Grafo no dirigido
    }
};
/*
void DFS (int startVertex ) {
    vector <bool > visited (V , false ) ;
    stack <int > stack ;

    stack.push( startVertex ) ;
    visited[startVertex] = true ;

    while (! stack . empty () ) {
        int currentVertex = stack.top ();
        stack.pop ();
 
        for (int neighbor : adjList [ currentVertex ])
        {
            if (! visited [ neighbor ]) {
            stack . push ( neighbor ) ;
            visited [ neighbor ] = true ;
            }
        }
    }
 }
*/
int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t,N,M,tmp;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&N,&M);
        map<pair<int, int>,int> valor;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                scanf("%d",&tmp);
                switch (tmp){
                case 0:
                    valor[make_pair(i,j)] = 0;
                    break;                    
                case 1:
                    valor[make_pair(i,j)] = 1;
                    break;
                case 2:
                    valor[make_pair(i,j)] = 2;
                    break;
                }
            }
        }
        map<pair<int,int>,int>::iterator it = valor.begin();

        while (it != valor.end()){
            printf("key: (%d,%d) , value: %d\n",it->first.first,it->first.second,it->second);
            it++;
        }

        
    }
    

    return 0;
}

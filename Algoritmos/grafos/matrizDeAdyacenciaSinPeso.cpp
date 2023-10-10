#include<vector>
#include<stack>
#include<stdio.h>
typedef std::vector<int> vi;
typedef std::vector<bool> vb;
typedef std::pair<int,int> ii;
typedef std::stack<int> sti;

class Grafo{
    public:
        int V;
        std::vector<vi> adjMatrix;

        Grafo(int vertices){
            V = vertices;
            adjMatrix.resize(V,vi(V,0));
        }
        void addEdge(int u,int v){
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;
        }
        void DFS(int u){
            vb visitados(V,false);
            sti stack;

            stack.push(u);
            visitados[u] = true;

            while (!stack.empty()){
                int verticeActual = stack.top();
                stack.pop();

                for (int vecino = 0; vecino < adjMatrix[verticeActual].size(); vecino++)
                {
                    if(!visitados[vecino] and adjMatrix[verticeActual][vecino] == 1){
                        stack.push(vecino);
                        visitados[vecino] = true;
                    }
                }
                printf("\n");
            
            }
            
        }
};
int main(){
    Grafo miGrafo(5);

    miGrafo.addEdge(0,1);
    miGrafo.addEdge(0,2);
    miGrafo.addEdge(0,3);
    miGrafo.addEdge(1,2);
    miGrafo.addEdge(2,3);
    miGrafo.addEdge(3,4);

    for (int i = 0; i < miGrafo.adjMatrix.size(); i++){
        for (int j = 0; j < miGrafo.adjMatrix[i].size(); j++){
            printf("%d ",miGrafo.adjMatrix[i][j]);
        }
        printf("\n");
    }

    miGrafo.DFS(0);
    

    return 0;
}
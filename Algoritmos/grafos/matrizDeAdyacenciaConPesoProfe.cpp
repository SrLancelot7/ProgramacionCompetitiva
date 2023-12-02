#include<vector>
#include<stdio.h>
typedef std::vector<int> vi;

class Grafo{
    public:
        int V;
        std::vector<vi> adjMatrix;

        Grafo(int vertices){
            V = vertices;
            adjMatrix.resize(V,vi(V,0));
        }
        void addEdge(int u,int v,int p){
            adjMatrix[u][v] = p;
            adjMatrix[v][u] = p;
        }
};
int main(){
    Grafo miGrafo(5);

    miGrafo.addEdge(0,1,5);
    miGrafo.addEdge(0,2,5);
    miGrafo.addEdge(0,3,1);
    miGrafo.addEdge(1,2,3);
    miGrafo.addEdge(2,3,4);
    miGrafo.addEdge(3,4,2);

    for (int i = 0; i < miGrafo.adjMatrix.size(); i++){
        for (int j = 0; j < miGrafo.adjMatrix[i].size(); j++){
            printf("%d ",miGrafo.adjMatrix[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
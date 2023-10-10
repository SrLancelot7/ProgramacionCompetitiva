#include<vector>
#include<stdio.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

class GrafoAdjList{
    public:
        int V;
        vector<vi> adjList;
    
    GrafoAdjList(int vertices){
        V = vertices;
        adjList.resize(V);
    }
    void addEdge(int u,int v){
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
};
class GrafoAdjMatrix{
    public:
        int V;
        std::vector<vi> adjMatrix;

        GrafoAdjMatrix(int vertices){
            V = vertices;
            adjMatrix.resize(V,vi(V,0));
        }
        void addEdge(int u,int v){
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;
        }
};
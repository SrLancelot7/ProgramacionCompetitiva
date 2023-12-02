#include<vector>
#include<stdio.h>
typedef std::pair<int,int> ii;
typedef std::vector<ii> vii;

class Grafo{
    public:
        int V;
        std::vector<vii> adjList;
    
    Grafo(int vertices){
        V = vertices;
        adjList.resize(V);
    }
    void addEdge(int u,int v,int p){
        adjList[u].push_back(std::make_pair(v,p));
        adjList[v].push_back(std::make_pair(u,p));
    }
};

int main(){
    Grafo miGrafo(5);

    miGrafo.addEdge(0,1,3);
    miGrafo.addEdge(0,2,4);
    miGrafo.addEdge(0,3,1);
    miGrafo.addEdge(1,2,3);
    miGrafo.addEdge(2,3,0);
    miGrafo.addEdge(3,4,2);

    printf("%d %d %d",1,miGrafo.adjList[1][0].first,miGrafo.adjList[1][0].second);   

    return 0;
}
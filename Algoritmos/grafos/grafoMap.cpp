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

            if(adjList.find(v) == adjList.end())
                adjList[v] = {u};
            else
                adjList[v].push_back(u);
        }
        int V(){
            return adjList.size();
        }
};

int main(){
    Grafo a;
    a.addEdge(0,1);
    return 0;
}
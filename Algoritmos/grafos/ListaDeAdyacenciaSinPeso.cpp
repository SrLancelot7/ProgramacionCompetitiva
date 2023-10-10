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
        std::vector<vi> adjList;

        Grafo(int vertices){
            V = vertices;
            adjList.resize(V);
        }
        void addEdge(int u,int v){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        int DFS(int u){
            vb visitados(V,false);
            sti stack;
            int gr_num = 1;

            stack.push(u);
            visitados[u] = true;
            int vis_num = 1;

            while (!stack.empty()){
                int verticeActual = stack.top();
                stack.pop();

                for (int vecino : adjList[verticeActual]){
                    if(!visitados[vecino]){
                        stack.push(vecino);
                        visitados[vecino] = true;
                        vis_num++;
                    }
                }

                printf("%d\n",vis_num);
                if(stack.empty() and vis_num != V){
                    gr_num++;
                    for (auto &&i : visitados){
                        if (i == false){
                            stack.push(i);
                            visitados[i] = true;
                            vis_num++;
                        }
                           
                    }
                }
            
            }
            
            return gr_num;
        }

};

int main(){
    Grafo miGrafo(3);

    for (int i = 0; i < miGrafo.adjList.size(); i++){
        printf("Nodo : %d\nvecinos: ",i);
        for (int j = 0; j < miGrafo.adjList[i].size(); j++)
        {
            printf("%d ",miGrafo.adjList[i][j]);
        }
        printf("\n");
    }

    printf("%d",miGrafo.DFS(0));
    

    return 0;
}
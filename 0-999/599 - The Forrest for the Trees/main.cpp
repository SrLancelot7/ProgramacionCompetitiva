#include<stdio.h>
#include<vector>
#include<map>
#include<cctype>
typedef std::vector<char> vc;

class Grafo{
    public:
        std::map<char,vc> adjList;
        
        void addEdge(char u,char v){
            if(adjList.find(u) == adjList.end())
                adjList[u] = {v};
            else
                adjList[u].push_back(v);

            if(adjList.find(v) == adjList.end())
                adjList[v] = {u};
            else
                adjList[v].push_back(u);
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
    int t,tree,acorn,e,v;
    scanf("%d",&t);
    while (t--){

        char s[100];
        char c;
        acorn = 0;
        e= 0;
        v= 0;
        Grafo bosque;
        while (scanf("%s",&s) and s[0] != '*'){
            bosque.addEdge(s[1],s[3]);
            e++;
        }
        scanf("%s",&s);
        for (auto &&i : s){
            if(i == NULL)
                break;
            if(isalpha(i)){
                if(bosque.adjList.find(i) == bosque.adjList.end())
                    acorn++;
                v++;
            }
        }
        tree = v - e - acorn;
        printf("There are %d tree(s) and %d acorn(s).\n",tree,acorn);
        
        
    }
    

    return 0;
}
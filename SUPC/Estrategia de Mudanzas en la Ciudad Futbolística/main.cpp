#include<vector>
#include<stdio.h>
typedef std::vector<int> vi;
//************************************
//NO FUNCIONA
//************************************
std::vector<vi> AdjList;
std::vector<char> futbol;

void addEdge(int u, int v){
    AdjList[u].push_back(v);
}

int main(){

    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int V,in,f;
    char e;
    scanf("%d",&V);
    AdjList.assign(V, vi());
    futbol.assign(V, 'a');

    for (int i = 0; i < V; i++){
        scanf(" %c %d",&e,&in);
        futbol[i] = e;
        while (in--){
            scanf("%d",&f);
            if(f!=0){
                addEdge(i,f-1);
            }
            else{
                addEdge(i,f);
            }
        }
    }

    int total;
    for (int i = 0; i < (int)AdjList.size(); i++){
        total = 0;
        for (int j = 0; j < (int)AdjList[i].size(); j++)
        {
            int v = AdjList[i][j];
            if(futbol[v] != futbol[i])
                total++;
        }
        if(total > (int)AdjList[i].size()/2 && (int)AdjList[i].size() != 0)
            printf("%d ",i+1);
    }
    
    return 0;
}

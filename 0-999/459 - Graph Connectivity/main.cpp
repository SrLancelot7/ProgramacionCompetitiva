#include<vector>
#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;
typedef std::vector<int> vi;

std::vector<vi> AdjList;
vi dfs_num;

void addEdge(int u, int v){
    AdjList[u].push_back(v);
}

void dfs(int u){
    dfs_num[u] = 1;
    for (int j = 0; j < (int)AdjList[u].size(); j++){
        int v = AdjList[u][j];
        if(dfs_num[v] == 0)
            dfs(v);
    }
    
}


int main(){

    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t,V,u,v;
    char c;
    scanf("%d",&t);
    while (t--)
    {
        AdjList.clear();
        dfs_num.clear();

        string input;
        cin >> c;
        V = c - '0' - 16;

        AdjList.assign(V, vi());
        dfs_num.assign(V,0);

        cin.ignore();
        while (getline(cin,input) && input != "")
        {
            int u,v;
            u = input[0] - '0' - 17;
            v = input[1] - '0' - 17;

            addEdge(u,v);
            addEdge(v,u);
        }

        int numCC=0;
        for (int i = 0; i < V; i++)
        {
            if(dfs_num[i] == 0){
                numCC++;
                dfs(i);
            }
        }

        printf("%d\n",numCC);
        if(t)
            printf("\n");
    }

    return 0;
}
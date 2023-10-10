#include<vector>
#include<stdio.h>
typedef std::vector<int> vi;

std::vector<vi> AdjList;
vi dfs_num;

void addEdge(int u, int v){
    AdjList[u].push_back(v);
    //AdjList[v].push_back(u);
}


bool dfs(int l){
        int arr[l];
        int tmp;
        bool encontrar;

        for (int i = 0; i < l; i++){
            scanf("%d",&tmp);
            arr[i] = tmp - 1;
        }
            
        
        for (int i = 0; i < l-1; i++){
            encontrar = true;
            for (int j = 0; j < AdjList[i].size(); j++)
            {
                printf("%d %d\n",AdjList[i][j],arr[i+1]);
                if(AdjList[i][j] == arr[i+1])
                {
                    encontrar = false;
                    break;
                }
                    
            }
            if(encontrar)
                return false;
        }   
        return true;
}


int main(){

    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif
    int V,E,a,b,T,l;
    scanf("%d %d",&V,&E);

    AdjList.assign(V, vi());
    dfs_num.assign(V,0);

    while (E--){
        scanf("%d %d",&a,&b);
        a--;b--;
        addEdge(a,b);
        addEdge(b,a);
    }
    scanf("%d",&T);
    
    while (T--)
    {
        scanf("%d",&l);
        if(dfs(l))
            printf("SI\n");
        else
            printf("NO\n");

    }
    
    
    return 0;
}
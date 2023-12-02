#include<vector>
#include<stdio.h>
typedef std::vector<int> vi;

std::vector<vi> AdjList;
std::vector<vi> cam_simples;
vi cam_actual;
vi dfs_num;

void addEdge(int u, int v){
    AdjList[u].push_back(v);
    AdjList[v].push_back(u);
}

void SimplePath_dfs(int u,int v){
    if(dfs_num[u] == 1)
        return;
    dfs_num[u] = 1;
    cam_actual.push_back(u);
    if(u == v){
        cam_simples.push_back(cam_actual);
        dfs_num[u] = 0;
        cam_actual.pop_back();
        return;
    }
    for (int j = 0; j < (int)AdjList[u].size(); j++){
        int next = AdjList[u][j];
        if(dfs_num[next] == 0)
            SimplePath_dfs(next,v);
    }
    cam_actual.pop_back();
    dfs_num[u] = 0;  
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int V,E,a,b,n,l;
    bool encontrado;
    scanf("%d %d",&V,&E);
    AdjList.assign(V, vi());
    while (E--){
        scanf("%d %d",&a,&b);
        addEdge(a-1,b-1);
    }
    scanf("%d",&n);
    while (n--){
        scanf("%d",&l);
        vi cam;
        for (int i = 0; i < l; i++){
            scanf("%d",&a);
            cam.push_back(a-1);
        }
        dfs_num.assign(V,0);
        SimplePath_dfs(0,cam[l-1]);
        encontrado = false;
        for (int i = 0; i < cam_simples.size(); i++){
            //for (int j = 0; j < cam_simples[i].size(); j++)
            //    printf("%d ",cam_simples[i][j]+1);
            //printf("\n");
            
            if(cam_simples[i] == cam)
                encontrado = true;
        }

        if(encontrado)
            printf("SI\n");
        else
            printf("NO\n");
        cam_simples.clear();
    }
    
    

    return 0;
}

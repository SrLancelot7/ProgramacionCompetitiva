#include<stdio.h>
#include<vector>
#include<queue>
typedef std::vector<int> vi;
typedef std::pair<int,int> ii;
typedef std::vector<ii> vii;

std::vector<vii> AdjList;
vi prim_taken;
std::priority_queue<ii> pq;

void addEdge(int u, int v,int p){
    AdjList[u].push_back(std::make_pair(v,p));
    AdjList[v].push_back(std::make_pair(u,p));
}

void process(int u){
    prim_taken[u] = 1;
    for (int i = 0; i < (int)AdjList[u].size(); i++){
        ii v = AdjList[u][i];
        if(!prim_taken[v.first])
            pq.push(ii(-v.second,-v.first));
    }
    
}

int prim(int u){
    process(u);
    int costo_total = 0;
    while (!pq.empty()){
        ii top = pq.top();
        pq.pop();
        if(!prim_taken[-top.second]){
            costo_total += -top.first;
            process(-top.second);
        }
    }
    return costo_total;   
}

int main(){

    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int V,u,j,p,K,M,c=0;
    while (scanf("%d",&V) != EOF)
    {
        if(c > 0) printf("\n");
        c++;
        
        AdjList.assign(V,vii());
        prim_taken.assign(V,0);
        for (int i = 0; i < V-1; i++)
        {
            scanf("%d %d %d",&u,&j,&p);
            addEdge(u-1,j-1,p);
        }
        printf("%d\n",prim(0));

        AdjList.assign(V,vii());
        prim_taken.assign(V,0);

        scanf("%d",&K);
        while (K--)
        {
            scanf("%d %d %d",&u,&j,&p);
            addEdge(u-1,j-1,p);
        }
        scanf("%d",&M);
        while (M--)
        {
            scanf("%d %d %d",&u,&j,&p);
            addEdge(u-1,j-1,p);
        }
        printf("%d\n",prim(0));
    
    }
    


    
    return 0;
}
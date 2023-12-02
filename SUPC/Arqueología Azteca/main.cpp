#include<stdio.h>
#include<algorithm>
#include<vector>
typedef std::vector<int> vi;

bool comTam(vi a,vi b){
    return a.size() < b.size();
}

bool comparador(int a,int b){
    return a > b;
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int c,n,a;
    std::vector<vi> pir;

    scanf("%d",&c);
    pir.assign(c,vi());

    for (int i = 0; i < c; i++){
        scanf("%d",&n);
        for (int j = 0; j < n; j++){
            scanf("%d",&a);
            pir[i].push_back(a);
        }
        std::sort(pir[i].begin(),pir[i].end(),comparador);
    }

    std::sort(pir.begin(),pir.end(),comTam);
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < pir[i].size(); j++)
            printf("%d ",pir[i][j]);
        printf("\n");
    }
    
    return 0;
}

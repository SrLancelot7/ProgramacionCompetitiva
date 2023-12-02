#include<stdio.h>
#include<map>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n,m,d,a,b,cantidad=0;
    scanf("%d %d %d",&n,&m,&d);
    map<int,int> influ;
    for (int i = 0; i < n; i++)
        influ[i] = 0;
    
    while (m--){
        scanf("%d %d",&a,&b);
        influ[b]++;
    }
    for (int i = 0; i < n; i++)
        if(influ[i] >= d)
            cantidad++;

    printf("%d",cantidad);

    return 0;
}

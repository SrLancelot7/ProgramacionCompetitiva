#include<stdio.h>
#include<set>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n,m,tmp,sameDisc;
    std::set<int> discos;

    while (scanf("%d %d",&n,&m) != EOF){
        if(n == 0 and m == 0)
            break;

        
        sameDisc = 0;
        while (n--){
            scanf("%d",&tmp);
            discos.insert(tmp);
        }
        while (m--){
            scanf("%d",&tmp);
            if(discos.count(tmp))
                sameDisc++;
        }

        printf("%d\n",sameDisc);
        
        discos.clear();
    }
    

    return 0;
}
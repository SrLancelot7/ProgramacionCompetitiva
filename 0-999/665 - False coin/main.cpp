#include<stdio.h>
#include <bitset>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t,N,K,P,C,casos=0,ans;
    std::bitset<101> peso;

    scanf("%d",&t);

    while(t--){
        scanf("%d %d",&N,&K);

        peso.reset();
        while (K--)
        {
            scanf("%d",&P);

            int arrIzq[P];
            int arrDer[P];

            for (int i = 0; i < P; i++)
                scanf("%d",&arrIzq[i]);
            for (int i = 0; i < P; i++)
                scanf("%d",&arrDer[i]);
            scanf(" %c",&C);

            if(C == '=')
                for (int i = 0; i < P; i++)
                {
                    peso.set(arrDer[i]-1);
                    peso.set(arrIzq[i]-1);
                }
        }
        for (int i = 0; i < N; i++)
            if(peso.test(i) == 0){
                ans = i+1;
                break;
            }

        if(casos > 0)
            printf("\n");
        
        if(peso.count() == N - 1)
            printf("%d\n",ans);
        else
            printf("0\n");
        
        casos++;
    }

    return 0;
}
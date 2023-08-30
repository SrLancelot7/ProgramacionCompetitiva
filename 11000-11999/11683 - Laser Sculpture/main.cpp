#include<stdio.h>
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

    int A,C,cortes,i,X,temp;
    while (true)
    {
        scanf("%d %d",&A,&C);
        if(A== 0) break;

        scanf("%d",&temp);
        cortes = A - temp;

        for (i = 1; i < C; i++)
        {
            scanf("%d",&X);
            if(X < temp){
                cortes += temp - X;
            }
            temp = X;
        }
        printf("%d\n",cortes);
         
    }
    

    return 0;
}
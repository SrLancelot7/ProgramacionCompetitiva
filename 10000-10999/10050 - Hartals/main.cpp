#include<stdio.h>
#include<iostream>
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

    int T,N,P,hartals,fri,sat;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%d %d",&N,&P);

        hartals = 0;
        int arr[P];
        fri = 6;
        sat = 7;

        for (int i = 0; i < P; i++)
            scanf("%d",&arr[i]);
        
        for (int i = 1; i <= N; i++)
        {
            if(i%7 == 6 or i%7 == 0)
                continue;

            for (int h = 0; h < P; h++)
                if(i%arr[h] == 0){
                    hartals++;
                    break;
                }
        }
        printf("%d\n",hartals);
    }
    

    return 0;
}
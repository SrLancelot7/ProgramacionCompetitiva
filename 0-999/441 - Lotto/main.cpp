#include<stdio.h>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int k,casos=0;
    while (scanf("%d",&k))
    {
        if(k == 0)
            break;

        int arr[k];

        for (int i = 0; i < k; i++)
            scanf("%d",&arr[i]);
        
        if(casos > 0)
            printf("\n");
        casos++;

        for (int a = 0; a < k - 5; a++)
            for (int b = a + 1; b < k - 4; b++)
                for (int c = b + 1; c < k - 3; c++)
                    for (int d = c + 1; d < k - 2; d++)
                        for (int e = d + 1; e < k - 1; e++)
                            for (int f = e + 1; f < k; f++)
                                printf("%d %d %d %d %d %d\n",arr[a],arr[b],arr[c],arr[d],arr[e],arr[f]);
        
    }
    

    return 0;
}
#include<stdio.h>
#include<algorithm>


int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int c,n,mitad,Total;
    float fHalf,sHalf;
    scanf("%d",&c);
    while (c--)
    {
        scanf("%d",&n);
        float arr[n];
        int arrO[n];
        for (int i = 0; i < n; i++){
            scanf("%f",&arr[i]);
            arrO[i] = i;
        }

        mitad = n/2;
        Total = 0;
        do
        {
            /*
            for (int i = 0; i < n; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");            
            */
            fHalf = 0; sHalf = 0;
            for (int i = 0; i < mitad; i++)
            {
                fHalf += arr[arrO[i]];
                sHalf += arr[arrO[i+mitad]];
            }
            if(fHalf == sHalf) Total++;
            
        } while (std::next_permutation(arrO,arrO+n));
        printf("%d\n",Total);
        
    }
    


    return 0;
}

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

    int n;
    bool cumple;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    
    std::sort(arr,arr+n);
    do
    {
        cumple = true;
        for (int i = 0; i < n; i++)
            if(arr[i] < 18)
                if((arr[i-1] < 18 || i==0) && (arr[i+1] < 18 || i== n-1))
                    cumple = false;

        if(cumple){
            for (int i = 0; i < n; i++)
                printf("%d ",arr[i]);
            printf("\n");
        }
        
    } while (std::next_permutation(arr,arr+n));
    
    

    return 0;
}

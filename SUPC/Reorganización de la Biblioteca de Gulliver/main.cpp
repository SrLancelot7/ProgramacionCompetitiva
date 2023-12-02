#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    
    for (int i = n-1; i >= 0; i--)
        printf("%d\n",arr[i]);

    return 0;
}

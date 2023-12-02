#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n,a,b;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    

    return 0;
}

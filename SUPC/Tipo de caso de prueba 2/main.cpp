#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int a,b;
    while (1)
    {
        scanf("%d %d",&a,&b);
        if(a == 0 && b== 0) break;
        printf("%d\n",a+b);
    }
    

    return 0;
}

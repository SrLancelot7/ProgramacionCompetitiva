#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int V;
    float total=2;

    scanf("%d",&V);
    total = V;
    if(V > 150000) total -= V*0.25;
    total *= 0.19;
    printf("%.2f",total);

    return 0;
}

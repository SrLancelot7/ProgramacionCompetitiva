#include<stdio.h>


int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    //double pi = 2 * acos(0.0);
    int dec = 2;
    double pi = 3.14159265;
    double n;
    scanf("%lf",&n);
    printf("%.*lf",dec,pi*n*n/4);
    

    return 0;
}

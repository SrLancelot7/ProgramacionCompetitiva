#include<stdio.h>

void altura(float a[]){
    bool c = true,d = true;

    for (int i = 0; i < 4; i++)
    {
        if(a[i] > a[i+1])
            c = false;
        if(a[i] < a[i+1])
            d = false;
    }

    if(c && !d)
        printf("Creciente\n"); 
    else if(d && !c)
        printf("Decreciente\n"); 
    else
        printf("Ninguno\n");
    
    return;
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    float a[5];
    while (scanf("%f %f %f %f %f",&a[0],&a[1],&a[2],&a[3],&a[4]) != EOF){
        altura(a);
    }
    

    return 0;
}

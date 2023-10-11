#include<stdio.h>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

void cuaternas(int t){
    for (int x = 1; x < t; x++)
        for (int y = x; y < t; y++)
            for (int z = y; z < t; z++)
                if(x*x + y*y + z*z == t*t){
                    printf("%d %d %d %d\n",x,y,z,t);
                    return;
                }
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int a,b;
    bool r;
    scanf("%d %d",&a,&b);
    for (int t = a; t <= b; t++)                
        cuaternas(t);                         

    return 0;
}

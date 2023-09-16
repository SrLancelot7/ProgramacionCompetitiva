#include<stdio.h>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

void EquacionesSimples(int A,int B,int C){
    for (int x = -22; x <= 22; x++)
        for (int y = -100; y <= 100; y++)
            for (int z = -100; z <= 100; z++)
                if(x != y && y != z && z != x)
                    if(x+y+z == A && x*y*z == B && x*x+y*y+z*z == C){
                        printf("%d %d %d\n",x,y,z);
                        return;
                    }
    printf("No solution.\n");
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

    int n,A,B,C;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&A,&B,&C);
        EquacionesSimples(A,B,C);
    }

    return 0;
}
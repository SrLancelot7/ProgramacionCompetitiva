#include<stdio.h>

void imprimir(int i,int j,int k,int l, int X){
    printf("%d%d%d%d es una clave de la suerte que suma %d\n",i,j,k,l,X);
}

void clave(int X){
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++)
                for (int l = 0; l < 10; l++)
                    if(i+j+k+l == X)
                        imprimir(i,j,k,l,X);
                        


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

    int n,X;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&X);
        clave(X);
        
    }
    

    return 0;
}

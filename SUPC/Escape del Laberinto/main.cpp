#include<stdio.h>
#include<string>
#define MAX 1000


//cambiar char por grid en caso de que la matriz sea de numeros
int grid[MAX][MAX];
int MRow,MCol;
bool encontrado;

int dr[] = {1,0,-1, 0}; //indica las pocisiones de la matriz
int dc[] = {0,1, 0,-1}; //son para todas las direcciones, cambiar esto y el ciclo en caso de que no lo sea
int floodFill(int r,int c,int c1,int c2){
    printf("%d: %d %d\n",grid[r][c],r,c); 
    if(r<0 || r>= MRow || c<0 || c>=MCol)
        return 0;
    if(grid[r][c] == 2)
        encontrado = true;
    if(grid[r][c] != c1)
        return 0;
    grid[r][c] = c2;
    int ans = 1;
    for (int i = 0; i < 4; i++){
        ans += floodFill(r + dr[i],c + dc[i],c1,c2);
    }
    return ans; //retorna la cantidad de zonas rellenadas
}

//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&MRow,&MCol);
        encontrado = false;
        
        for (int i = 0; i < MRow; i++)
            for (int j = 0; j < MCol; j++)
                scanf("%d",&grid[i][j]);
        
        floodFill(0,0,1,0);

        if(encontrado)
            printf("Escape exitoso\n");
        else
            printf("No hay escapatoria\n");

    }
    

    return 0;
}
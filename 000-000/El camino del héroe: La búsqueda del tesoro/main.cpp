#include<stdio.h>
#define MAX 1000


//cambiar char por grid en caso de que la matriz sea de numeros
char grid[MAX][MAX];
int MRow,MCol;

int dr[] = {1,0,-1, 0}; //indica las pocisiones de la matriz
int dc[] = {0,1, 0,-1}; //son para todas las direcciones, cambiar esto y el ciclo en caso de que no lo sea
int floodFill(int r,int c,char c1,char c2){ 
    if(r<0 || r>= MRow || c<0 || c>=MCol)
        return 0;
    if(grid[r][c] != c1 and grid[r][c] != 'D' and grid[r][c] != 'T')
        return 0;
    int ans= 0;
    if(grid[r][c] == 'D')
        ans = 10;
    if(grid[r][c] == 'T')
        ans = 100;
    grid[r][c] = c2;
    for (int i = 0; i < 4; i++){
        ans += floodFill(r + dr[i],c + dc[i],c1,c2);
    }
    return ans; //retorna la cantidad de zonas rellenadas
}


int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int r,c;
    scanf("%d %d",&MRow,&MCol);
    scanf("%d %d",&r,&c);
    for (int i = 0; i < MRow; i++)
        for (int j = 0; j < MCol; j++)
            scanf(" %c",&grid[i][j]);
    int ans = floodFill(r,c,'C','.');
    printf("%d",ans);

    return 0;
}

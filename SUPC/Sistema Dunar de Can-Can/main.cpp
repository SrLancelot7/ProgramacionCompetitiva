#include<stdio.h>
#include<string>
#define MAX 1000


//cambiar char por grid en caso de que la matriz sea de numeros
char grid[MAX][MAX];
int MRow,MCol;

int dr[] = {1,1,0,-1,-1,-1, 0, 1}; //indica las pocisiones de la matriz
int dc[] = {0,1,1, 1, 0,-1,-1,-1}; //son para todas las direcciones, cambiar esto y el ciclo en caso de que no lo sea
int floodFill(int r,int c,char c1,char c2){ 
    if(r<0 || r>= MRow || c<0 || c>=MCol)
        return 0;
    if(grid[r][c] != c1)
        return 0;
    grid[r][c] = c2;
    int ans = 1;
    for (int i = 0; i < 8; i++){
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

    int t;
    scanf("%d",&t);
    while (t--)
    {
        int ans = 0,tmp;
        scanf("%d %d",&MRow,&MCol);

        for (int i = 0; i < MRow; i++)
            for (int j = 0; j < MCol; j++)
                scanf(" %c",&grid[i][j]);

        for (int i = 0; i < MRow; i++)
            for (int j = 0; j < MCol; j++)
                if(grid[i][j] == 'C'){
                    tmp = floodFill(i,j,'C','D');
                    if(tmp > ans)
                        ans = tmp;
                }

        printf("%d\n",ans);
    }
    

    return 0;
}
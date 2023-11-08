#include<stdio.h>
#include<string>
#include<queue>
typedef std::pair<int,int> ii;
typedef std::queue<ii> qii;
#define MAX 1000


//cambiar char por grid en caso de que la matriz sea de numeros
int grid[MAX][MAX];
int MRow,MCol;
int xi,xf,yi,yf;



int dr[] = {1,0,-1, 0}; //indica las pocisiones de la matriz
int dc[] = {0,1, 0,-1}; //son para todas las direcciones, cambiar esto y el ciclo en caso de que no lo sea
int BFSfloodFill(int r,int c,int c1){
    qii fila;
    grid[r][c] = 1;
    fila.push(std::make_pair(r,c));
    while(!fila.empty()){
        r = fila.front().first;
        c = fila.front().second;
        fila.pop();
        if(r == xf && c == yf)
            return grid[r][c];
        for (int i = 0; i < 4; i++){
            int rv = r+dr[i],cv = c+dc[i];
            if(rv<0 || rv>= MRow || cv<0 || cv>=MCol)
                continue;
            if(grid[rv][cv] != c1)
                continue;
            grid[rv][cv] = grid[r][c]+1;
            fila.push(std::make_pair(rv,cv));           
        }
    }

    return 0;   
}


int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int num;
    scanf("%d %d",&MRow,&MCol);
    scanf("%d %d",&xi,&yi);
    scanf("%d %d",&xf,&yf);

    for (int i = 0; i < MRow; i++)
        for (int j = 0; j < MCol; j++){
            scanf("%d",&grid[i][j]);
            if(grid[i][j] == 1)
                grid[i][j] = -1;
        }

    printf("%d",floodFill(xi,yi,0)-1);

    return 0;
}

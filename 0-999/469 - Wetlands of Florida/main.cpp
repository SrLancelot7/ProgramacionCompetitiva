#include<stdio.h>
#include<cstring>
#define MAX 1000



//cambiar char por grid en caso de que la matriz sea de numeros
char input[MAX], grid[MAX][MAX];
int MRow,MCol,t,i,j;

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


    sscanf(gets(input), "%d",&t);
    gets(input);

    while (t--)
    {
        MRow = 0;
        while (true)
        {
            gets(grid[MRow]);
            if(grid[MRow][0] != 'L' && grid[MRow][0] != 'W')
                break;
            MRow++;
        }
        MCol = (int)strlen(grid[0]);

        strcpy(input,grid[MRow]);
        while (true)
        {
            sscanf(input, "%d %d", &i, &j);
            printf("%d\n",floodFill(i-1,j-1,'W','.'));
            floodFill(i-1,j-1,'.','W');
            gets(input);
            if(strcmp(input,"") == false || feof(stdin))
                break;
        }

        if(t)
            printf("\n");
        
        
        
    }
    

    return 0;
}
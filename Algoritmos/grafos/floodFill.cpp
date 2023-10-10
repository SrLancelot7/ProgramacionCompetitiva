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


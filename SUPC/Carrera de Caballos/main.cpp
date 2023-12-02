#include<stdio.h>
#include<string>
#include<queue>
#include<vector>
typedef std::pair<int,int> ii;
typedef std::queue<ii> qii;
typedef std::vector<int> vi;


//cambiar char por grid en caso de que la matriz sea de numeros
std::vector<vi> grid;
int MRow,MCol;
int bx,by,nx,ny,xf,yf,rb,rn;


int dr[] = {1,2,2,1,-1,-2,-2,-1}; //indica las pocisiones de la matriz
int dc[] = {2,1,-1,-2,-2,-1,1,2}; //son para todas las direcciones, cambiar esto y el ciclo en caso de que no lo sea
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
        for (int i = 0; i < 8; i++){
            int rv = r+dr[i],cv = c+dc[i];
            if(rv<0 || rv>= MRow || cv<0 || cv>=MCol)
                continue;
            if(grid[rv][cv] != c1)
                continue;
            grid[rv][cv] = grid[r][c]+1;
            fila.push(std::make_pair(rv,cv));           
        }
    }

    return 100001;   
}

void imprimir(){
    for (int i = 0; i < MRow; i++){
        for (int j = 0; j < MCol; j++){
            printf("%3d",grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int borrar(){
    for (int i = 0; i < MRow; i++)
        for (int j = 0; j < MCol; j++)
            if(grid[i][j] != -1)
                grid[i][j] = 0;
    
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

    int o,a,b;

    scanf("%d %d",&MRow,&MCol);
    scanf("%d %d",&bx,&by);
    scanf("%d %d",&nx,&ny);
    scanf("%d %d",&xf,&yf);

    grid.assign(MRow,vi());
    for (int i = 0; i < MRow; i++)
        for (int j = 0; j < MCol; j++)
            grid[i].push_back(0);
    
    scanf("%d",&o);
    while (o--)
    {
        scanf("%d %d",&a,&b);
        grid[a][b] = -1;
    }

    imprimir();
    rb = BFSfloodFill(bx,by,0);
    imprimir();
    borrar();
    imprimir();
    rn = BFSfloodFill(nx,ny,0);
    imprimir();

    if(rn < rb) printf("Negro");
    else if(rn > rb) printf("Blanco");
    else printf("Empate");
    return 0;
}

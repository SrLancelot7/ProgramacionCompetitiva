#include<stdio.h>


char grid[12][12];

void vertical(int x, int y,char tmp[]){
    for (int i = 0; i < 12; i++){
        if(tmp[i] == '\0' && i + x > 12)
            return;
        else
            break;
    }
    for (int i = 0; i < 12; i++){
        if(tmp[i] == '\0')
            break;
        grid[i+x][y] = tmp[i];
    }

}
void horizontal(int x, int y,char tmp[]){
    for (int i = 0; i < 12; i++){
        if(tmp[i] != '\0' && i + y > 12)
            return;
    }
    for (int i = 0; i < 12; i++){
        if(tmp[i] == '\0')
            break;
        grid[x][i+y] = tmp[i];
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

    
    int x,y;
    char o;

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            grid[i][j] = '.';
        
    while (scanf(" %c %d %d",&o,&x,&y) != EOF){
        char tmp[13];
        scanf("%12s", tmp);
        //printf("%c %d %d %s\n",o,x,y,tmp);
        
        if(o=='H') horizontal(x,y,tmp);
        else vertical(x,y,tmp);
    }
    
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++)
            printf("%c",grid[i][j]);
        printf("\n");
    }
    
    

    return 0;
}

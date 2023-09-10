#include<stdio.h>
#define MAX 100
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

struct arrStruct{
    char arr[MAX][MAX];
};

//define quien gano la batalla
char battle(char old,char neww,char temp){
    if(old == 'R' and neww == 'S')
        return 'R';
    else if(old == 'S' and neww == 'P')
        return 'S';
    else if(old == 'P' and neww == 'R')
        return 'P';
    return temp;
}

//determina el valor de las pocisiones adyacentes de cada pocision del array
arrStruct war(arrStruct var,int r,int c){
    arrStruct newArr = var;
    
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++){
            if(i > 0)
                newArr.arr[i-1][j] = battle(var.arr[i][j],var.arr[i-1][j],newArr.arr[i-1][j]);
            if(i < r-1)
                newArr.arr[i+1][j] = battle(var.arr[i][j],var.arr[i+1][j],newArr.arr[i+1][j]);
            if(j > 0)
                newArr.arr[i][j-1] = battle(var.arr[i][j],var.arr[i][j-1],newArr.arr[i][j-1]);
            if(j < c-1)
                newArr.arr[i][j+1] = battle(var.arr[i][j],var.arr[i][j+1],newArr.arr[i][j+1]);
        }
    
    return newArr;
}

//imprime el array
void printArray(arrStruct var,int r,int c){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            printf("%c",var.arr[i][j]);
        printf("\n");
    }
}

//scanea el array
arrStruct getArray(int r,int c){
    arrStruct var;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf(" %c",&var.arr[i][j]);
    return var;
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif


    int t,r,c,n,casos=0;
    scanf("%d",&t);

    while(t--){

        //recibe los datos
        scanf("%d %d %d",&r,&c,&n);
        arrStruct arr;
        arr = getArray(r,c);

        //determina el territorio por cada dia
        while (n--)
            arr = war(arr,r,c);
        
        //imprime los datos
        if(casos > 0)
            printf("\n");
        printArray(arr,r,c); 

        casos++;
    }

    return 0;
}
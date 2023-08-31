#include<stdio.h>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int L,dis,aux;
    char ch,temp;
    while(scanf("%d",&L)){
        if(L==0) break;
        dis = L;
        aux = 0;
        temp = '.';
        while(L--){
            scanf(" %c",&ch);
            aux++;
            switch (ch){
                case 'Z':
                    dis=0;
                    break;
                case 'D':
                    if(temp == 'R' and aux < dis){
                        dis = aux;
                    }
                    temp = ch;
                    aux = 0;
                    break;
                case 'R':
                    if(temp == 'D' and aux < dis){    
                        dis = aux;
                    }
                    temp = ch;
                    aux = 0;
                    break;             
            }
        }
        printf("%d\n",dis);
    }

    return 0;
}
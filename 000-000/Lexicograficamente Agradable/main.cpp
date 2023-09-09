#include<stdio.h>
#include<cstring>
#define MAX 100001
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste


//es ordenamiento, ocupo el insertion sort con algunos cambios
void lexicoMinimo(char S[],int K,int size){
    for (int i = K; i < size; i++)
    {
        char key = S[i];
        int pt = i;
        while (true)
            if(key < S[pt-K] and pt - K >= 0){
                S[pt] = S[pt-K];
                S[pt-K] = key;
                pt -= K;
            }
            else
                break;
    }
    printf("%s",S);
    return;
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    char S[MAX];
    int K;

    scanf("%s",&S);
    scanf("%d",&K);

    int size = strlen(S);

    lexicoMinimo(S,K,size);



    return 0;
}
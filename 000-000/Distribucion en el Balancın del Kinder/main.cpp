#include<stdio.h>
#include <algorithm> //std::next_permutation, std::sort
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste


bool balance(int arr[],int size){

    int izq=0,der=0;

    //calcula el balance de cada lado
    for (int i = 0; i < size/2; i++)
    {
        izq += arr[i];
        der += arr[i+size/2];                
    }

    if(izq == der)
        return true;
    else
        return false;

}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int N,L,per,size;
    scanf("%d",&N);
    while (N--)
    {
        scanf("%d",&L);

        int arr[L];
        per=0;

        for (int i = 0; i < L; i++)
            scanf("%d",&arr[i]);
        
        if(L%2 == 0) // tamaño par
            size = L; 
        else         // tamaño impar
            size = L - 1;

        //ordena el array
        std::sort(arr,arr+L); //es necesario tener el arr ordenado para que funcione el permutation
        
        //permuta el array de todas las maneras posibles
        do
        {   
            if(balance(arr,size))
                per++;
        } while (std::next_permutation(arr,arr+L));
        
        printf("%d\n",per);       
    }
    

    return 0;
}
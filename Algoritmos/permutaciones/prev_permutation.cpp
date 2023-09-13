#include<algorithm>
#include<stdio.h>

/*
    next permutations

    reordena un arreglo segun su anterior permutacion

    std::prev_permutation(first,last)
        first: punto del array donde el sorteo debe comenzar
        last: el tamaño el cual el array debe ser sorteado
    
    Time Complexity: O(N*N!) 
*/
bool comparador(int a, int b){
    return a > b;
}
    

int main(){
    
    int arr[] = { 1, 2, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr,arr+n,comparador);
    do
    {
        for (int i = 0; i < n; i++)
            printf("%d ",arr[i]);
        printf("\n");
        
    } while (std::prev_permutation(arr,arr+n));
    
}
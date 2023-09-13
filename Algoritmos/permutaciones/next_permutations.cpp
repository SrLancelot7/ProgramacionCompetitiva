#include<algorithm>
#include<stdio.h>

/*
    next permutations

    reordena un arreglo segun su siguiente permutacion

    std::next_permutation(first,last)
        first: punto del array donde el sorteo debe comenzar
        last: el tamaño el cual el array debe ser sorteado
    
    Time Complexity: O(N*N!) 
*/

int main(){
    
    int arr[] = { 1, 2, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr,arr+n);
    do
    {
        for (int i = 0; i < n; i++)
            printf("%d ",arr[i]);
        printf("\n");
        
    } while (std::next_permutation(arr,arr+n));
    
}
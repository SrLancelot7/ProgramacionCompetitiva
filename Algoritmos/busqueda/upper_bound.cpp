#include<stdio.h>
#include<algorithm>

/*
lower bound

retorna el iterador del primer elemento que sea mayor al val dado, o el ultimo en
caso de que no se encuentre
Solo funciona en arreglos sorteados

std::lower_bound(first,last,val,comp)

    first: punto del array donde el sorteo debe comenzar
    last: el tamaño el cual el array debe ser sorteado
    val: valor a comparar
    comp: funcion binaria

Time Complexity:  log2(last – first) + O(1)
*/
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 30, 3, 2, 4, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    std::sort(arr,arr+n);
    int* low = std::upper_bound(arr,arr+n,29);

    printf("el numero %d\n",*low);
    printf("la pocision %d\n",low - arr);
  
    return 0;
}
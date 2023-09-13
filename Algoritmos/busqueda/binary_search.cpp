#include<stdio.h>
#include<algorithm>

/*
lower bound

retorna un booleano indicando si el numero se encontro
se necisita tener el array sorteado

std::lower_bound(first,last,val)

    first: punto del array donde el sorteo debe comenzar
    last: el tamaño el cual el array debe ser sorteado
    val: valor a comparar

Time Complexity: O(log N)
*/
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 2, 4, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    std::sort(arr,arr+n);
    bool low = std::binary_search(arr,arr+n,6);

    printf("el numero se ha encontrado %d\n",low);
  
    return 0;
}
#include<stdio.h>
#include<algorithm>

/*
lower bound

retorna el iterador del primer elemento en el rango cuyo valor no es menor que val

std::lower_bound(first,last,val,comp)

    first: punto del array donde el sorteo debe comenzar
    last: el tamaño el cual el array debe ser sorteado
    val: valor a comparar
    comp: funcion binaria

Time Complexity: O(N log N)
*/
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 2, 4, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int* low = std::lower_bound(arr,arr+n,5);

    printf("el numero %d\n",*low);
    printf("la pocision %d\n",low - arr);
  
    return 0;
}
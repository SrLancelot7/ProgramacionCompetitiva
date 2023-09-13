#include<stdio.h>
#include<algorithm>

/*
stable sort

ordena el arreglo, manteniendo el orden de los elementos segun sus valores.

std::partial_sort(primero,ultimo,orden)

primero: iterador hacia primer elemento a ordenar
ultimo: iterador hacia el ultimo elemento a ordenar
orden: el orden en el cual los elementos seran ordenados, puedes modificar esto a tu gusto

Time Complexity: O(n*log(n))
Auxiliary Space: O(1)

(un ejemplo es calculando promedios, digamos que dos alumnos tienen mismos promedios, entonces 
los mantiene en las pocisiones que se encuentran)
*/

int main(){
    int arr[10] = {1, 3, 4, 2, 7, 0, 9, 8, 5, 6};
    std::stable_sort(arr,arr+10);

    for (int i = 0; i < 10; i++)
        printf("%d ",arr[i]);
    

}
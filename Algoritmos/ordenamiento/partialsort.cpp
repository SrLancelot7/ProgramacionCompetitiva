#include<stdio.h>
#include<algorithm>

/*
Partial sort

ordena parte de un arreglo

std::partial_sort(primero,medio,ultimo,orden)

primero: iterador hacia primer elemento a ordenar
ultimo: iterador hacia el ultimo elemento a ordenar
medio: iterado utilizado para separar cuales elementos seran ordenados
orden: el orden en el cual los elementos seran ordenados, puedes modificar esto a tu gusto

Time Complexity: O(n log K)
Auxiliary Space: O(1)
*/

int main(){
    int arr[10] = {1, 3, 4, 2, 7, 0, 9, 8, 5, 6};
    std::partial_sort(arr,arr+5,arr+10);

    for (int i = 0; i < 10; i++)
        printf("%d ",arr[i]);
    

}
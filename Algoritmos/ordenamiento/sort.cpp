#include<algorithm> // std::sort
#include<stdio.h>   // printf

/*
std::sort(begin,end,orden):

parametros:
    begin: punto del array donde el sorteo debe comenzar
    end: el tamaño el cual el array debe ser sorteado
    orden: el orden en el cual los elementos seran ordenados, puedes modificar esto a tu gusto

Time Complexity: O(N log N)
*/

//el punto es devolver un valor true o falso al comparar dos de estas cosas
bool comparador(int a, int b){
    if(a == 0)
        return false;
    if(b == 0)
        return false;
    return a < b;
}

int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 2, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    std::sort(arr, arr + n,comparador);
  
    for (int i = 0; i < n; ++i)
        printf("%d ",arr[i]);
  
    return 0;
}
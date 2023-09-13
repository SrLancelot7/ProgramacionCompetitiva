using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

/*
busca el numero mas grande dado un array de numeros y el largo del array

deja el primer elemento como el numero mas grande posible (max), luego recorre 
el array comparando con los siguientes elementos, si encuentra uno mas grande 
que el maximo el numero encontrado es el nuevo maximo, sino se mantiene igual, 
una vez terminado el recorrido, retorna el maximo numero.
    puede cambiarse para buscar el numero mas pequeño haciendo un ligero 
cambio en el codigo.
*/

int maxNumber(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        //(arr[i < max) busca el numero mas pequeñp
        if(arr[i] > max) max = arr[i]; 
    }
    return max;
}

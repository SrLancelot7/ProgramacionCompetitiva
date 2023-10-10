#include<stdio.h>
#include<vector>
/* Vector

Es un array dinamico con la habilidad de cambiar el tamaño automaticamente
cuando un elemento es insertado o borrado, su almacenamiento es controlado
automaticamente por su contenedor.

Los elementos de un vector pueden se accedidos a travez de iteradores.

sytanx: 
std::vector<int> nombre_del_vector;

funciones:
    iteradores:
        begin(): retorna un iterador apuntando al primer elemento del vector.
        end(): retorna un iterador apuntando al ultimo elemento del vector.
        rbegin(): retorna un iterador reveroso apuntando al ultimo elemento del vector.
        se mueve desde el ultimo hasta al primero.
        rend(): retorna un iterador apuntando a teoricamente al primer elemento del vector.
        cbegin(): retorna un iterador constante apuntando al primer elemento del vector.
        cend(): retorna un iterador constante apuntando al ultimo elemento del vector.
        crbegin(): retorna un iterador constante reveroso apuntando al ultimo elemento del vector.
        se mueve desde el ultimo hasta al primero.
        crend(): retorna un iterador constante apuntando a teoricamente al primer elemento del vector.
    capacidad:
        size(): retorna el numero de elementos del vector
        max_size(): retorna la maxima cantidad de elementos que el vector puede contener.
        capacity(): retorna el tamaño de espacio de almacenamiento asignado al vector.
        resize(n): cambia el tamaño del contenedor para que tenga 'n' elementos.
        empty(): retorna si el contenedor esta vacio.
        shrink_to_fit(): reduce la capacidad del contenedor para que quepa en el tamaño y destruye
        aquellos elementos que sobrepasan la capicidad.
        reverse(): pide que la capacidad del elemento se al menos lo suficiente para contener n elementos.
    acceso a elementos:
        nombre_del_vector[g] || at(g): retorna una referencia al elemento en la pocision g.
        front(): retrona una referencia al primer elemento en el vector.
        back(): retrona una referencia al ultimo elemento en el vector.
        data(): retorna un puntero directo a la memoria del arreglo usado internamente por el vector para guardar
        sus propios elementos
    modificadores:
        assign(): asigna un nuevo valor al elemento replazando el antiguo.
        push.back(): empuja un elemento al vector por atras.
        pop.back(): remueve un elemento al vector por atras.
        insert(): inserta nuevos elementos antes del elemento en la pocision especificada.
        erase(): remueve elemento del contenedor en la pocision o rango especificado.
        swap(): intercambio elementos entre vectores. tamaños pueden que difieran.
        clear(): remueve todos los elementos de un vector.
        emplace(): extiende del contenedor insertando un nuevo elemento en esta pocision.
        emplace_back(): inserta un nuevo elemento en el contenedor del vector atras.  
    
complejidad:
    Random access – constant O(1)
    Insertion or removal of elements at the end – constant O(1)
    Insertion or removal of elements – linear in the distance to the end of the vector O(N)
    Knowing the size – constant O(1)
    Resizing the vector- Linear O(N)

*/

int main(){
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
        printf("%d ",v[i]);
    printf("\n");
    for (auto i = v.begin(); i != v.end(); i++)
        printf("%d ",*i);
    
    
}
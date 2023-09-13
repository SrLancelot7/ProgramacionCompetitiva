#include <bitset>

/* Bitset

Es un array de booleans , en el cual cada booleano toma un 
bit de espacio, lo que lo hace sumamente rapido.
Su unica limitacion es que necesita un tamaño conocido.

Syntax:
std::bitset<size> nombre_de_la_variable(inicializacion);

    Para una array de 0:
    std::bitset<8> variable_name;                    00000000

    para un array de un numero en binario:
    std::bitset<8> variable_name(15);                00001111

    para representar un string binario
    std::bitset<8> variable_name(string("1111");     00001111

Funciones

set(): setea uno o todos los valores a 1
reset(): resetea uno o todos los valores a 0
flip(): intercambia uno o todos los valores del bitset
count(): cuenta de la cantidad de set bit(cantidad de 1)
test(): retorna el valor del booleano dado el index
any(): chekea si cualquier bit esta en set
none(): chekea si ningun bit esta en set
all(): chekea si todos los bits esta en set()
size(): retorna el tamaño del bitset
to_string(): convierte el bitset en un std::string
to_ulong(): convierte el bitset a unsingned long
to_ullong(): convierte el bitset a unsingned long long

*/

int main(){
    std::bitset<8> variable_name;
    variable_name.set(2);
    variable_name.flip(); 
    printf("%s\n%d", variable_name.to_string().c_str(),variable_name.count());
    // cout<<variable_name; es nas simple
}

#include<stdio.h>

int main(){

    //(1 << 2) con esto creo el bitmask 0100, puedo utilizar OR o AND para manipularlo

    //setear un bit

    int bitmask = 0;      //genero el numero 0                                                     0000   0
    bitmask |= (1 << 2);  //muevo el bit 1 dos espacios a la izquierda para setearlo               0100   4
    bitmask |= (1 << 0);  //muevo el bit 1 cero espacios a la izquierda para setearlo              0101   5
    printf("%d\n",bitmask);

    //resetear un bit

    bitmask &= ~(1 << 2); //muevo el bit 1 3 espacios a la izquierda                               0100
                          //luego uso el NOT para intercambiar los valores                         1011
                          //finalmente utilizo AND para cambiar todos los valores excepto el 3ero  1011 & 0101 == 0001    1
    printf("%d\n",bitmask);

    bool is_set = (bitmask & (1 << 0)) != 0; 
    printf("%d\n",is_set);

    int num = (1<<0)|(1<<2)|(1<<4); //set de valores, como un bitmask, en este caso el 0,2,4


}
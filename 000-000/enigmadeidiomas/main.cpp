#include<stdio.h>
#define MAX 101
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

/*
El Enigma de los Idiomas Voc´alicos
C´odigo: enigmadeidiomas
En un laboratorio ling¨u´ıstico de renombre mundial, un grupo de destacados ling¨uistas se re´une
para investigar la complejidad de distintos idiomas y su relaci´on con la cantidad de vocales que
poseen las palabras. Su objetivo es descubrir patrones y caracter´ısticas comunes entre los idiomas
estudiados, y para ello necesitan desarrollar un programa que calcule el promedio de vocales por
palabra en cada uno de ellos.
Descripci´on de la entrada: La entrada consta de varias l´ıneas. La primera l´ınea contiene un
n´umero entero N(1 ≤ N ≤ 104
), que representa la cantidad de idiomas a analizar. A continuaci´on,
para cada idioma, habr´an varias l´ıneas. La primera l´ınea contiene un n´umero entero M(1 ≤ M ≤
103
), que indica la cantidad de palabras a analizar en ese idioma. Las siguientes M l´ıneas contienen
las M palabras separadas a analizar. Cada palabra consiste ´unicamente de letras min´usculas del
alfabeto ingl´es y tiene una longitud m´axima de 100 caracteres. Todas las palabras terminan con
un punto.
Descripci´on de la salida: Para cada idioma, deber´as imprimir una l´ınea con el promedio de
vocales por palabra, redondeado a dos decimales.
*/
int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n,m,tmp;
    double count;
    char arr[MAX];

    scanf("%d",&n);
    while(n--){

        scanf("%d",&m);

        count = 0;
        tmp = m;

        while (tmp--){
            scanf("%s",arr);
            
            for (auto i : arr){
                if(i == '.')
                    break;
                if(i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u')
                    count++;
            }
        }

        count /= m;
        printf("%.2f\n",count);
    }

    return 0;
}
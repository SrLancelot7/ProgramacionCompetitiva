#include<stdio.h>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste
/*
La Conjetura de los Cuaternos
C´odigo: conjeturadecuaternos
Como investigador cient´ıfico apasionado por la matem´atica, te has obsesionado recientemente
con el teorema de Pit´agoras y has decidido llevarlo al siguiente nivel. Tu objetivo es encontrar
la primera cuaterna de n´umeros enteros (x, y, z, t) que cumplan con una versi´on extendida del
teorema de Pit´agoras, donde los valores de t est´an dentro de cierto intervalo. Es decir, quieres
encontrar una cuaterna que satisfagan la siguiente ecuaci´on:

x2 + y2 + z2 = t2

para cada t en cierto rango y x, y, z ∈ N y (x, y, z) la menor posible lexicogr´aficamente, es decir,
en este contexto es x ≤ y ≤ z.
Sin embargo, dado que a mano no puedes verificar todas las combinaciones posibles en busca de
estas cuaternas, necesitas escribir un programa que lo haga por ti. Dados dos n´umeros enteros
a y b, tu tarea es encontrar para cada t una cuaterna (x, y, z, t) que cumplan con la ecuaci´on
anterior, donde a ≤ t ≤ b. ¡Parece un desaf´ıo emocionante! ¿Puedes resolverlo?

Descripci´on de la entrada: La entrada consta de dos enteros a y b (1 ≤ a ≤ b ≤ 105) que
representan el intervalo en el que deben estar los valores de t.

Descripci´on de la Salida: Para cada t, debes imprimir la primera (lexicogr´aficamente) las
cuaternas (x, y, z, t) que cumplan con la ecuaci´on x2 + y2 + z2 = t2 y donde a ≤ t ≤ b y
x, y, z ∈ N. Cada cuaterna debe aparecer en una l´ınea separada, con los n´umeros separados por
espacios partiendo desde el valor de t m´as peque˜no al m´as alto.
*/

bool cuatertasBacktracking(int x,int y,int z,int t){
    if(x == t || y == t || z == t)
        return false;

    if(x*x + y*y + z*z == t*t){
        printf("%d %d %d %d\n",x,y,z,t);
        return true;
    }
    
    if(cuatertasBacktracking(x,y,z+1,t))
        return true;
    if(cuatertasBacktracking(x,y+1,z+1,t))
        return true;
    if(cuatertasBacktracking(x+1,y+1,z+1,t))
        return true;
    
    return false;
}

void cuaternas(int t){
    for (int x = 1; x < t; x++)
        for (int y = x; y < t; y++)
            for (int z = y; z < t; z++)
                if(x*x + y*y + z*z == t*t){
                    printf("%d %d %d %d\n",x,y,z,t);
                    return;
                }
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int a,b;
    bool r;
    scanf("%d %d",&a,&b);
    for (int t = a; t <= b; t++)                // ambas son correctas
        //cuaternas(t);                         // la primera usa fuerza bruta
        r = cuatertasBacktracking(1,1,1,t);     // y la segunda usa backtracking

    return 0;
}
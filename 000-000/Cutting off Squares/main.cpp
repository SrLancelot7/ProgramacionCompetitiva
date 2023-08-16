#include<stdio.h>
#include<iostream>

//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste
using namespace std;

//le das las dimensiones y calcula cuantas veces se puede cortar el rectangulo
int respuesta

int cortaRectangulos(int a, int b)
{
    if (a>b) return a/b;
    else if(b>a) return b/a;
    else return 0;
}

int caracteres(int a, int b)
{ 
    int turnos = 0;
    int cR; 
    while (true)
    {
        cR = cortaRectangulos(a,b);
        if(cR == 0) 
    }
    
    
    return cortaRectangulos(a,b);
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        
        caracteres(a,b);
        cout<<resp<<endl;
    }
    return 0;
}
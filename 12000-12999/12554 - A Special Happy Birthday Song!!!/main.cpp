#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

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
    string arr[t];
    string cancion[] = {"Happy","birthday","to","you"};

    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }

    int nombre = 0, letra = 0;
    int ciclos = 1;
    if (t > 16)
    {
        if(t%16 == 0) ciclos = t/16;
        else ciclos = t/16 + 1;
    }

    for (int j = 0; j < ciclos; j++)
    {
        for (int i = 0; i < 16; i++)
        {
            if (i==11) cout<<arr[nombre]<<": "<<"Rujia"<<endl;
            else  cout<<arr[nombre]<<": "<<cancion[letra]<<endl;

            nombre++;
            letra++;
            if(nombre == t) nombre = 0;
            if(letra == 4) letra = 0;
        }
    }
    

    
    return 0;
}
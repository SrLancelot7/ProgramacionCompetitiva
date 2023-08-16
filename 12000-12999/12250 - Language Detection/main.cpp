#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

string idioma(string saludo)
{
    if(saludo == "HELLO") return "ENGLISH";
    else if(saludo == "HOLA") return "SPANISH";
    else if(saludo == "HALLO") return "GERMAN";
    else if(saludo == "BONJOUR") return "FRENCH";
    else if(saludo == "CIAO") return "ITALIAN";
    else if(saludo == "ZDRAVSTVUJTE") return "RUSSIAN";
    else return "UNKNOWN";
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int casos=0;
    while(true)
    {
        casos++;
        string saludo;
        cin>>saludo;
        if(saludo == "#")break;
        cout<<"Case "<<casos<<": "<<idioma(saludo)<<endl;
    }

    return 0;
}
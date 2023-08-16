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

    int casos=0;
    while(true)
    {
        casos++;
        string frase;
        cin >> frase;
        if(frase == "Hajj") cout<<"Case "<<casos<<": Hajj-e-Akbar"<<endl;
        if(frase == "Umrah") cout<<"Case "<<casos<<": Hajj-e-Asghar"<<endl;
        if(frase == "*") break;    
    }

    return 0;
}
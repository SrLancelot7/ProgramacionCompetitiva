#include<stdio.h>
#include<iostream>
#include <string>
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

    string formula;
    
    while(getline(cin,formula))
    {
        cout<<formula<<endl;
    }

    return 0;
}
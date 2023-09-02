#include<stdio.h>
#include<iostream>
#include<cmath>
#include <sstream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int minimo(int i,int num){

    int aux;

    aux = log10(num) + 1;
    if(num == aux) 
        return i;
    i++;
    return minimo(i,aux);
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    string s;
    int num;
    while(cin>>s){
        if(s== "END") 
            break;

        stringstream ss;
        ss << s;
        ss >> num;
        printf("%d\n",minimo(1,num));

    }
    return 0;
}
#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int valor(string word){
    int value=0;
    //1 mayuscula,2 minuscula
    for (char c : word)
    {
        if(isalpha(c)){
            value += tolower(c) - 'a' + 1;
        }
    }
    while(value > 9){
        int total=0;
        while(value){
            total += value%10;
            value /= 10;
        }
        value = total;
    }
    return value;
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    string n1,n2;

    while(getline(cin,n1) and getline(cin,n2)){

        int value1 = valor(n1);
        int value2 = valor(n2);

        double ratio = 100.0 * min(value1,value2) / max(value1,value2);
        printf("%.2f %%\n",ratio);
    }

    return 0;
}
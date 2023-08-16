#include<stdio.h>
#include<iostream>

//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

using namespace std;

char comparador(int a, int b)
{
    if(a < b) return '<';
    if(a > b) return '>';
    if(a == b) return '=';
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
    cin >>t;

    while(t--)
    {
        int a , b;
        cin >> a >>b;
        cout<<comparador(a,b)<<endl;
    }


    return 0;
}
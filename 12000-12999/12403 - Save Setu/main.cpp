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

    int t,don=0;
    cin>>t;

    while(t--)
    {
        string operacion;
        cin>>operacion;
        if(operacion == "report") cout<<don<<endl;
        if(operacion == "donate")
        {
            int num;
            cin>>num;
            don = don + num;
        } 
    }

    return 0;
}
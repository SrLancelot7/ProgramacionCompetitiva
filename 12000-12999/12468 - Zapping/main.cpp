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

    int a, b, res;
    while (true)
    {
        cin>>a>>b;
        if(a==-1 and b==-1) break;
        res = a - b;
        if(res < 0) res = res * -1;
        if(res > 50) res = 100 - res;
        cout<<res<<"\n";
    }
    return 0;
}
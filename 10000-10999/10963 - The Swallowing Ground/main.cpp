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

    int t,w;
    cin>>t;
    while(t--)
    {
        bool r=true;
        int a,b,diferencia,w;
        cin>>w;
        cin>>a>>b;
        diferencia = a-b;
        w--;
        while(w--)
        {
            cin>>a>>b;
            if(a-b != diferencia) r = false;
        }
        if(r) cout<<"yes\n";
        else cout<<"no\n";
        if(t) cout<<"\n";
    }

    return 0;
}
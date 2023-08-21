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
    while(t--)
    {
        int g;
        cin>>g;

        int total=0;
        while(g--)
        {
            int esp, ani, eco;
            cin>>esp>>ani>>eco;
            total += esp*eco;
        }
        cout<<total<<endl;

    }

    return 0;
}
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

    string webs[10];
    int rev[10];

    int t,max;
    cin>>t;
    for (int j = 1; j <= t; j++)
    {
        cout<<"Case #"<<j<<":\n";
        max=0;
        for (int i = 0; i < 10; i++)
        {
            cin>>webs[i];
            cin>>rev[i];
            if(rev[i] > max) max = rev[i];
        }
        for (int i = 0; i < 10; i++)
        {
            if(rev[i] == max) cout<<webs[i]<<"\n";
        }
    }
    

    return 0;
}
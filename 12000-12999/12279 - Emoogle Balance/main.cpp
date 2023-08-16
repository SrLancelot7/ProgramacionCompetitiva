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
        int n;
        cin >> n;
        if(n==0) break;
        int balance=0, r;
        while (n--)
        {
            cin>> r;
            if(r==0) balance--;
            else balance++;
        }
        cout<<"Case "<<casos<<": "<<balance<<endl;
    }

    return 0;
}
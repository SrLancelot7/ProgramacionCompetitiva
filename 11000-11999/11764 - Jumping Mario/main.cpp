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

    int t,n,jump,wall,high,low;
    cin>>t;
    for (int j = 1; j <= t; j++)
    {
        high=0,low=0;
        cin>>n;
        cin>>jump;
        for (int i = 1; i < n; i++)
        {
            cin>>wall;
            if(wall > jump) high++;
            if(wall < jump) low++;
            jump = wall;            
        }
        cout<<"Case "<<j<<": "<<high<<" "<<low<<"\n";
    }

    return 0;
}
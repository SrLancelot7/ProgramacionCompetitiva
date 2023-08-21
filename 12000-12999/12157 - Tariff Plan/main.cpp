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

    int t,n,mile,juice,llamadas;
    cin >>t;
    for (int i = 1; i <= t; i++)
    {   
        mile = 0,juice = 0;
        cin >>n;
        while(n--){
            cin>>llamadas;
            mile = mile + ((llamadas/30)+1)*10;
            juice = juice + ((llamadas/60)+1)*15;
        }

        cout<<"Case "<<i<<": ";

        if(juice > mile) cout<<"Mile "<<mile<<"\n";
        else if(juice < mile) cout<<"Juice "<<juice<<"\n";
        else cout<<"Mile Juice "<<mile<<"\n";
    }
    

    return 0;
}
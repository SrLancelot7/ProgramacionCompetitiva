#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

string coordenada(int n, int m, int x, int y)
{
    if(n==x or m == y) return "divisa";
    if(n > x)
    {
        if(m>y) return "SO";
        else return "NO";
    }
    else
    {
        if(m>y) return "SE";
        else return "NE";
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    while (true)
    {
        int k;
        cin >> k;
        if(k == 0) break;
        int n , m;
        cin >> n >> m;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            cout<< coordenada(n,m,x,y)<<endl;
        }
    }
    

    return 0;
}
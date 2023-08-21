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

    int n,b,h,w,p,a,total;

    while(cin>>n>>b>>h>>w)
    {
        total=b+1;
        for (int i = 0; i < h; i++)
        {
            cin>>p;
            for (int j = 0; j < w; j++)
            {
                cin>>a;
                if(a >= n and n*p < total){
                    total = n*p;
                }
            }           
        }
               
        if(total <= b ) cout<<total<<"\n";
        else cout<<"stay home\n";
    }

    return 0;
}
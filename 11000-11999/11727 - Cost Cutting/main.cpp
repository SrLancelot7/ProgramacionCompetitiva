#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int chamba(int a,int b, int c)
{
    if (a >= b and a >= c){
        if (b <= c) return c;
        else return b;
    } 
    if (b >= a and b >= c){
        if (a <= c) return c;
        else return a;
    } 
    if (c >= b and c >= a){
        if (b <= a) return a;
        else return b;
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

    int t;
    cin>>t;
    int con = 1;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<"Case "<<con<<": "<<chamba(a,b,c)<<endl;
        con++;
    }

    return 0;
}
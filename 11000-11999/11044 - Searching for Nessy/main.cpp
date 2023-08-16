#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int ness(int n,int m)
{
    int ng, mg;
    if(n%3==0) ng = n/3;
    else ng = n/3 + 1;

    if(m%3==0) mg = m/3;
    else mg = m/3 + 1;

    return ng * mg;
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
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >>n>>m;
        cout<<ness(n-2,m-2)<<endl;
    }

    return 0;
}
#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

bool medir(int lar,int anc,int alt)
{
    if(lar<=20 and anc<=20 and alt<=20) return true;
    else return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t,c = 1;
    cin>>t;
    while(t--)
    {
        int lar,anc,alt;
        cin>>lar>>anc>>alt;
        if (medir(lar,anc,alt)) cout<<"Case "<<c<<": good"<<endl;
        else cout<<"Case "<<c<<": bad"<<endl;
        c++;
    }
    return 0;
}
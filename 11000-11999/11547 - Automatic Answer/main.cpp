#include<stdio.h>
#include<iostream>

using namespace std;

//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int skillIssue(int n)
{
    n = ((((n*567)/9)+7492)*235)/47-498;
    n= n/10;
    int tempN = (n/10)*10;
    n = n - tempN;
    if(n >= 0) return n;
    else return -n;
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
    while(t--)
    {
        int n;
        cin >> n;
        cout<<skillIssue(n)<<endl;
    }

    return 0;
}
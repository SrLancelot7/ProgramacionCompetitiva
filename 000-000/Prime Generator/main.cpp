#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste
bool Primo(int n)
{
    if(n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0) return false;
    }
    return true;
     
}

int main()
{
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
#endif

    int num;
    cin>>num;
    while (num--)
    {
        int uno, dos;
        cin>>uno>>dos;
        for (uno; uno <= dos; uno++)
        {
            if(Primo(uno)) cout<<uno<<endl;
        }
        cout<<endl; 
    }
    return 0;
}
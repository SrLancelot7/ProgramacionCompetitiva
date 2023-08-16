#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int numero(string num)
{
    if(num.size() == 5) return 3;
    else{
        int buenas = 0;
        if (num[num.length()-3]== 'o') buenas++;
        if (num[num.length()-2]== 'n') buenas++;
        if (num[num.length()-1]== 'e') buenas++;
        if(buenas >= 2) return 1;
        else return 2;
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
    while (t--)
    {
        string num;
        cin >> num;
        cout<<numero(num)<<endl;
    }

    return 0;
}
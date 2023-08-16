#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

char exp(string num)
{
    if(num == "1" or num == "4" or num == "78") return '+';
    else if(num[num.size()-1]=='5' and num[num.size()-2]=='3') return '-';
    else if(num[0]=='9' and num[num.size()-1]=='4') return '*';
    else if(num[0]=='1' and num[1]=='9' and num[2]=='0') return '?';
    
    return '?';
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
    string experimento;
    while(t--)
    {
        cin>>experimento;
        cout<<exp(experimento)<<endl;
        
    }

    return 0;
}
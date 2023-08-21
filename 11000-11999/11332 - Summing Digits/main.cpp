#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int func(int n){
    int size = (log10(n));
    int total=0;
    while(size--){
        total = total + (n%10);
        n = n/10;
    }
    return total + n;
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n;
    while(true){
        cin>>n;
        if(n == 0) break;
        while(n > 9){
            n = func(n);
        }
        cout<<n<<endl;
    }

    return 0;
}
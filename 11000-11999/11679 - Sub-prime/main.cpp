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

    int b,n,D,C,B;
    while(true){
        cin>>b>>n;
        if(b == 0 and n==0) break;
        
        int arr[b];
        bool deuda=true;
        for (int i = 0; i < b; i++)
        {
            cin>>arr[i];
        }


        for (int i = 0; i < n; i++)
        {
            cin>>D>>C>>B;
            arr[D-1] = arr[D-1]-B;
            arr[C-1] = arr[C-1]+B;           
        }
        for (int i = 0; i < b; i++)
        {
            if(arr[i] < 0){
                deuda=false;
                break;
            }
        }
        if(deuda) cout<<"S\n";
        else cout<<"N\n";      
    }

    return 0;
}
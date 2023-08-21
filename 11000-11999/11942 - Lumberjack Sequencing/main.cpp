#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

bool ordenaoPaLante(int arr[])
{
    for (int i = 1; i < 10; i++)
    {
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}
bool ordenaoPaTra(int arr[])
{
    for (int i = 1; i < 10; i++)
    {
        if(arr[i] > arr[i-1]) return false;
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

    cout<<"Lumberjacks:\n";
    int t,arr[10];
    cin>>t;

    while(t--){
        for (int i = 0; i < 10; i++)
        {
            cin>>arr[i];
        }
        if(ordenaoPaLante(arr) or ordenaoPaTra(arr)) cout<<"Ordered\n";
        else cout<<"Unordered\n";
    }

    return 0;
}
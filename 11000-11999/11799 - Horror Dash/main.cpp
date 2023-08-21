#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int maxNumber(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > max) max = arr[i]; 
    }
    return max;
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t,n;
    cin>>t;
    for (int j = 1; j <= t; j++)
    {
        cin>>n;
        int arr[n];
        cout<<"Case "<<j<<": ";

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<maxNumber(arr,n)<<"\n";
    }
    

    return 0;
}
#include<stdio.h>
#include<iostream>

//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

using namespace std;

int insertionSort(int arr[], int n)
{   
    //----insertion sort----
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 and arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
    //----------------------

    int resp = 0;
    for (int i = 0; i < n-1; i++)
    {
        resp = resp + (arr[i+1] - arr[i]);
    }
    return resp*2;
    
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
        int n,ntemp;
        cin >> n;
        int tiendas[n];
        ntemp = n;
        while(n--)
        {
            cin>>tiendas[n];
        }
        cout<<insertionSort(tiendas, ntemp)<<endl;
    }

    return 0;
}
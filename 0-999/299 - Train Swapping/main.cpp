#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int insertionSort(int arr[], int n)
{
    int swaps=0; //nuevo
    //----insertion sort----
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 and arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
            swaps++; //nuevo
        }
        arr[j+1] = key;
    }
    //----------------------   
    return swaps; 
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
        int l;
        cin>>l;
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin>>arr[i];
        }
        cout<<"Optimal train swapping takes "<<insertionSort(arr, l)<<" swaps."<<endl;
    }

    return 0;
}
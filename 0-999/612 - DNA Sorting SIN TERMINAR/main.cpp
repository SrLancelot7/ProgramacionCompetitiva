#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste



int insertionSort(char arr[], int n)
{
    int swaps=0;
    //----insertion sort----
    for (int i = 1; i < n; i++)
    {
        char key = arr[i];
        int j = i - 1;
        while (j >= 0 and arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
            swaps++;
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
    cin >>t;

    while (t--)
    {
        int n, m;
        cin>>n>>m;
        char sorter[m][n];

        int swaps[m];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>sorter[i][j];
            }
            
        }
        
    }
    


    return 0;
}
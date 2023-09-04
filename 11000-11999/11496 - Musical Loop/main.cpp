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
    int N,temp,peaks;
    bool up,down;
    while(true){
        scanf("%d",&N);
        if(N == 0) 
            break;
        
        int arr[N];
        for (int i = 0; i < N; i++)
            scanf("%d",&arr[i]);
        
        up = false;
        down = false;
        peaks = 0;
        
        if(arr[N-1] < arr[0]) 
            up = true;
        else
            down = true;
        
        for (int i = 1; i < N; i++)
        {
            if(arr[i-1] < arr[i] && down){
                peaks++;
                up = true;
                down = false;
            }
            else if(arr[i-1] > arr[i] && up) {
                peaks++;
                up = false;
                down = true;
            }
        }
        if(arr[N-1] < arr[0] && down)
            peaks++;
        else if(arr[N-1] > arr[0] && up)
            peaks++;
 

        printf("%d\n",peaks);
        
    }

    return 0;
}
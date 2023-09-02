#include <stdio.h>
#include <cstring>
#include <iostream>
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

    int T,pointer;
    char input[100001];
    int arr[100];
    scanf("%d",&T);
    for (int t = 1; t <= T; t++)
    {
        pointer = 0;
        for (int i = 0; i < 100; ++i)
            arr[i] = 0;

        scanf("%s", &input);

        for(int i=0;input[i];i++){
            switch (input[i])
            {
            case '+':
                arr[pointer]++;
                if(arr[pointer] == 256) arr[pointer] = 0;
                break;
            case '-':
                arr[pointer]--;
                if(arr[pointer] == -1) arr[pointer] = 255;
                break;
            case '>':
                pointer++;
                if(pointer == 100) pointer = 0;
                break;
            case '<':
                pointer--;
                if(pointer == -1) pointer = 99;
                break;
            }
        }

        printf("Case %d:", t);
        for (int i = 0; i < 100; i++)
        {
            printf(" %02X",arr[i]);
        }
        printf("\n");   

    }
    


    return 0;
}
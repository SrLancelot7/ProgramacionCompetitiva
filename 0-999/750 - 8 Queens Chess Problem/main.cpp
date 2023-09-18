#include<stdio.h>
#include<algorithm>
#include<cmath>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

bool reinas(int arr[]){
    for (int i = 0; i < 7; i++)
        for (int k = i + 1; k < 8; k++)
            if(abs(i - k) == abs(arr[i] - arr[k]))
                return false;
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

    int t,r,c;
    int arr[8] = {1,2,3,4,5,6,7,8};

    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        if(i > 0)
            printf("\n");
    
        scanf("%d %d",&r,&c);
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");

        std::sort(arr,arr+8);
        int soln = 1;
        do
        {
            if(arr[c-1] ==  r)
                if(reinas(arr)){
                    printf("%2d      ",soln);
                    printf("%d %d %d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7]);
                    soln++;
                }
        } while (std::next_permutation(arr,arr+8));
    }

    return 0;
}
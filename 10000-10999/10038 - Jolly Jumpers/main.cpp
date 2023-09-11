#include<stdio.h>
#include<bitset>
#include<cmath>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n;
    std::bitset<3010> jolly;

    while(scanf("%d",&n) != EOF){
        int arr[n];
        jolly.reset();

        for (int i = 0; i < n; i++)
            scanf("%d",&arr[i]);
        
        for (int i = 1; i < n; i++)
        {   
            if(abs(arr[i] - arr[i-1]) < n)
                jolly.set(abs(arr[i] - arr[i-1]));

        }
        bool t = true;

        for (int i = 1; i < n; i++)
            if(jolly.test(i) == 0)
                t = false;
    
        if(t)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }

    return 0;
}
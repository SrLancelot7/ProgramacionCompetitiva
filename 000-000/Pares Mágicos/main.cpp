#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif
    int c,n,total;
    scanf("%d",&c);
    while (c--){
        scanf("%d",&n);
        int a[n],b[n];
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        for (int i = 0; i < n; i++)
            scanf("%d",&b[i]);

        total = 0;
        for (int i = 0; i < n; i++)
            for (int j = i+1; j < n; j++)
                if(a[i]*a[j] == b[i]+b[j]){
                    printf("(%d,%d)\n",i+1,j+1);
                    total++;
                }
        printf("%d\n",total);
    }
    

    return 0;
}

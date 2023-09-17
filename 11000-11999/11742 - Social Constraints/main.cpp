#include<stdio.h>
#include<algorithm>
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

    int n,m;
    
    while (scanf("%d %d",&n,&m) != EOF){
        if(n == 0 && m == 0)
            break;

        int C[m][3];
        for (int i = 0; i < m; i++)
            scanf("%d %d %d",&C[i][0],&C[i][1],&C[i][2]);
        
        int arr[n];
        int numSeat = 0;
        for (int i = 0; i < n; i++)
            arr[i] = i;


        do
        {
            bool ast = true;

            for (int i = 0; i < m; i++){

                int iA,iB,sep;
                iA = std::find(arr,arr+n,C[i][0]) - arr;
                iB = std::find(arr,arr+n,C[i][1]) - arr;
                sep = abs(iA - iB);

                if(C[i][2] < 0)
                    if(sep < abs(C[i][2]))
                        ast = false; 
                if(C[i][2] > 0)
                    if(sep > C[i][2])
                        ast = false; 
                    
                
            }
            if(ast)
                numSeat++;
            
        } while (std::next_permutation(arr,arr+n));
        
        printf("%d\n",numSeat);

    }
    

    return 0;
}
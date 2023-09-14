#include<stdio.h>
#include<vector>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste



int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif
    int k;
    while (scanf("%d",&k) != EOF)
    {
        std::vector<std::pair<int,int>> fra;

        for (int y = k+1; y <= 2*k; y++)
            if((k*y)%(y-k) == 0)
                fra.push_back(std::make_pair((k * y) / (y - k), y));
            
        printf("%d\n",fra.size());

        for (int i = 0; i < fra.size(); i++)
        {
            printf("1/%d = ",k);
            printf("1/%d + 1/%d\n",fra[i].first,fra[i].second);
        }
        
        
    }
    

    return 0;
}
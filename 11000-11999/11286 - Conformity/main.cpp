#include<stdio.h>
#include<map>
#include<vector>
#include<algorithm>
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
    while (scanf("%d",&n) and n != 0){
        int max = 1;
        std::map<std::vector<int>,int> frosh;
        std::vector<int> C(5);

        for (int i = 0; i < n; i++){
            scanf("%d %d %d %d %d ",&C[0],&C[1],&C[2],&C[3],&C[4]);
            std::sort(C.begin(),C.end());

            if(frosh.count(C)){
                frosh[C]++;
                if(frosh[C] > max)
                    max = frosh[C];
            }
            else{
                frosh[C] = 1;
            }
        }

        std::map<std::vector<int>,int>::iterator it;
        int total = 0;
        for (it = frosh.begin(); it != frosh.end(); it++)
            if(max == it->second)
                total++;
        
        max *= total;
        printf("%d\n",max);       
    }
    

    return 0;
}
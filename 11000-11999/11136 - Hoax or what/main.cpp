#include<stdio.h>
#include<set>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n,k,tmp, ini, fin;
    std::multiset<int> estafaPiramidal;

    while (scanf("%d",&n) and n != 0){
        long long total = 0;
        while (n--){
            scanf("%d",&k);
            while (k--){
                scanf(" %d",&tmp);
                estafaPiramidal.insert(tmp);
            }
            
            ini = *estafaPiramidal.begin();
            fin = *estafaPiramidal.rbegin(); 
            total += fin - ini;

            estafaPiramidal.erase(estafaPiramidal.find(ini));
            estafaPiramidal.erase(estafaPiramidal.find(fin));
        }
        printf("%llu\n",total);

        estafaPiramidal.clear();    
    }
    

    return 0;
}
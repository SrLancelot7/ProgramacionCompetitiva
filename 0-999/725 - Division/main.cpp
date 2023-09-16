#include<stdio.h>
#include<bitset>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int n,casos=0;
    std::bitset<10> numeros;

    while (scanf("%d",&n) != EOF){
        if(n == 0)
            break;

        bool encontro=false;

        if(casos > 0)
            printf("\n");
        casos++;

        for (int fghij = 1234; fghij <= 98765 / n; fghij++)
        {
            numeros.reset();

            int abcde = fghij * n;
            int tmp1,tmp2;
            
            tmp1 = abcde;
            tmp2 = fghij;

            for (int i = 0; i < 5; i++){
                numeros.set(tmp1 % 10);
                numeros.set(tmp2 % 10);
                tmp1 /= 10;
                tmp2 /= 10;
            }
            
            if(numeros.all()){
                printf("%0.5d / %0.5d = %d\n",abcde,fghij,n);
                encontro = true;
            }

        }

        if(encontro == false)
            printf("There are no solutions for %d.\n",n);
        
        
    }
    

    return 0;
}
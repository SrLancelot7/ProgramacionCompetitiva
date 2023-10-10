#include<stdio.h>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

using namespace std;  
  
void PrintAllSubsets(int N, int max_mask_req)  
{  
    printf("0");  
  
  
    for (int mask = 0; mask <= max_mask_req; mask++)  
    {  
        for (int k = 0; k < N; k++)  
            if ((mask & (1 << k)) != 0)  
                printf("%d ",k+1);    
        printf("\n");  
    }  
}  
  
int main()  
{  
  
    int N = 3;  
  
    int max_mask_req = (1 << N) - 1;  
  
    PrintAllSubsets(N, max_mask_req);  
    return 0;  
}   
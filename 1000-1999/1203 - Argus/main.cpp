#include<stdio.h>
#include<queue>

typedef std::pair<int,std::pair<int,int>> ppi;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    char accion[20];
    int Qnum,period,k;
    std::priority_queue<ppi,std::vector<ppi>,std::greater<ppi>> pq;

    while (scanf("%s",&accion) and accion[0] != '#'){
        scanf("%d %d",&Qnum,&period);
        pq.push(ppi(period,std::pair<int,int>(Qnum,period)));
    }
    
    scanf("%d",&k);
    while (k--){
        ppi pr = pq.top();
        pq.pop();

        printf("%d\n",pr.second.first);
        pr.first += pr.second.second;
        pq.push(pr);
    }
    

    return 0;
}
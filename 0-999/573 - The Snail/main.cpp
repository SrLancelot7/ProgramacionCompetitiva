#include<stdio.h>
#include<iostream>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int dia;
    float H,U,D,F,dis;
    bool logro;
    while(true){
        cin>>H>>U>>D>>F;
        F = U * F/100;

        if(H==0) break;
        dia = 1;
        dis = 0;
        while(dis < H and dis >= 0){

            dis += U;
            if(U > 0) U -= F;
            if(dis > H){
                logro = true;
                break;
            }
            dis -= D;
            if(dis < 0){
                logro = false;
                break;
            } 
            dia++;
        }
        if(logro) cout<<"success on day "<<dia;
        else cout<<"failure on day "<<dia;
        cout<<endl;

    }

    return 0;
}
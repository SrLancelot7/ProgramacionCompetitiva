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

    string binario;
    int q,i,j,t=1;
    bool same;

    while(cin>>binario){

        cin>>q;
        cout<<"Case "<<t<<":\n";
        t++;

        while(q--){

            cin>>i>>j;
            same = true;

            if(i > j){
                for (j; j <= i; j++)
                {
                    if(binario[i] != binario[j]){
                        same = false;
                        break;
                    }
                }
            }
            else{
                for (i; i <= j; i++)
                {
                    if(binario[i] != binario[j]){
                        same = false;
                        break;
                    }
                }
            }

            
            if(same) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }

    return 0;
}
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

    int n,m,c,i=1,max,current,op,j;
    bool blown;
    while(true){
        cin>>n>>m>>c;

        if(n==0 and m==0 and c==0) break;
        max=0;
        current=0;
        blown = false;
        pair <int,bool> elec[n];

        for (j = 0;j < n; j++)
        {
            cin>>elec[j].first;
            elec[j].second = false;
        } 
        for (j = 0; j < m; j++)
        {
            cin>>op;
            if(elec[op-1].second){
                current -= elec[op-1].first;
                elec[op-1].second = false;
            } 
            else{
                current += elec[op-1].first;
                elec[op-1].second = true;
            } 

            if(current > c) blown = true;
            if(current > max) max = current;

        }
        
        cout<<"Sequence "<<i<<endl;
        if(blown) cout<<"Fuse was blown.\n";
        else{
            cout<<"Fuse was not blown.\n";
            cout<<"Maximal power consumption was "<<max<<" amperes.\n";
        }
        cout<<endl;
        i++;
    }

    return 0;
}
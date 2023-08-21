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
    int m,d;
    float p,l;
    
    while(true){
        cin>>m>>p>>l>>d;
        if(m < 0) break;
        
        float arr[m+1],tdes;
        int key,j;
        cin>>key>>tdes;
        
        for (int i = 1; i < d; i++)
        {
            cin>>j;   
            for (key; key < j; key++)
            {
                arr[key] = tdes;
            }
            cin>>tdes;
        }
        for (j; j <= m; j++)
        {
            arr[j] = tdes;
        }
        float mp = l / m;
        float loand = l+p;
        loand = loand - (loand * arr[0]);
        if(loand > l) cout<<"0 months"<<endl;
        else{
            for (int i = 1; i <= m; i++)
            {
                l = l - mp;
                loand = loand - (loand * arr[i]);
                if(loand > l){
                    if(i==1) cout<<"1 month"<<endl;
                    else cout<<i<<" months"<<endl;
                    break;
                }
            }
            
        }
 
    }


    return 0;
}
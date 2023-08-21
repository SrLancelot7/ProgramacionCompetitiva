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

    int k,m,c,r,curReq,curTem;
    bool requirements;
    while(true){
        cin>>k;
        if(k == 0)  break;
        cin>>m;

        requirements = true;

        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin>>arr[i]; 
        }
        while (m--)
        {
            curReq=0;
            cin >> c >> r;
            for (int i = 0; i < c; i++)
            {
                cin>> curTem;
                for (int j = 0; j < k; j++)
                {
                    if(arr[j]==curTem){
                        curReq++;
                        break;
                    }
                }
            }
            if(curReq < r) requirements = false;
        }

        if(requirements) cout<<"yes\n";
        else cout<<"no\n";      
    }

    return 0;
}
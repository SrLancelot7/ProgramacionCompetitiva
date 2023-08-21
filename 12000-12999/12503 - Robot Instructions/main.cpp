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

    int t,n,p;
    cin>>t;
    while(t--)
    {

        p=0;
        cin>>n;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            string res;
            cin>>res;
            if(res == "LEFT"){
                p--;
                arr[i] = "LEFT";
            }
            else if(res == "RIGHT"){
                p++;
                arr[i] = "RIGHT";
            }
            else{
                cin>>res;
                int inst;
                cin>>inst;
                if(arr[inst-1] == "LEFT"){
                p--;
                arr[i] = "LEFT";
                }
                else if(arr[inst-1] == "RIGHT"){
                    p++;
                    arr[i] = "RIGHT";
                }
            } 
        }
        cout<<p<<"\n";
        
    }

    return 0;
}
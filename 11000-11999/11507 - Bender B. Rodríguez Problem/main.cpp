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

    int L,Z,Y;
    string bend,last;
    while(cin>>L){
        if(L==0) break;
        Z=0;
        Y=0;
        last = "+x";
        for (int i = 0; i < L-1; i++)
        {
            cin>>bend;
            if(last == "+x"){
                if(bend != "No") last = bend;
            }
            else if(last == "-x"){
                if(bend != "No"){
                    last = bend;
                    if(last == "+y") last = "-y";
                    else if(last == "-y") last = "+y";
                    else if(last == "+z") last = "-z";
                    else if(last == "-z") last = "+z";
                }
            }
            else if(last == "+y"){
                if(bend == "+y") last = "-x";
                else if(bend == "-y") last = "+x";
            }
            else if(last == "-y"){
                if(bend == "-y") last = "-x";
                else if(bend == "+y") last = "+x";                    
            }
            else if(last == "+z"){
                if(bend == "+z") last = "-x";
                else if(bend == "-z") last = "+x";                    
            }
            else if(last == "-z"){
                if(bend == "-z") last = "-x";
                else if(bend == "+z") last = "+x";                    
            }
        }
        cout<<last<<endl;


        
    }

    return 0;
}
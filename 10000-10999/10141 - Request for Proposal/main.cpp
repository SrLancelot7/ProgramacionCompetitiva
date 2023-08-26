#include<stdio.h>
#include<iostream>
#include<string>

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

    int n,p,compliance,complianceAux,casos=1,r;
    float d=-1.00, dAux;
    string RFP,RFPaux,reqAux,getlineaux;
    while(cin>>n>>p){
        if(casos != 1){ 
            if(n != 0 and p != 0) cout<<endl;
        }
        if(n==0 && p==0) break;
        string req[n];
        compliance=0;

        getline(cin,req[0]);
        for (int i = 0; i < n; i++)
        {
            getline(cin,req[i]);
        }
        while(p--){
            complianceAux=0;
            getline(cin,RFPaux);
            cin>>dAux>>r;
            getline(cin,getlineaux);
            for(int i = 0; i < r; i++){
                getline(cin,getlineaux);
            }

            if(r > compliance){
                d = dAux;
                RFP = RFPaux;
                compliance = r;
            }
            else if (r == compliance){
                if(dAux < d){
                    d = dAux;
                    RFP = RFPaux;
                    compliance = r;
                }
            }           
        }
        cout<<"RFP #"<<casos<<endl;
        cout<<RFP<<endl;

        casos++;
    }

    return 0;
}
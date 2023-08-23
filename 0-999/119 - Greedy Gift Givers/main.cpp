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

    

    int t,i,j,k,l,pos,m,n;
    string nAux;
    bool lastline=false;
    while(cin>>t){
        pair <string,int> nombres[t];
        for (i = 0; i < t; i++)
        {
            cin>>nombres[i].first;
            nombres[i].second = 0; 
        }
        for (i = 0; i < t; i++)
        {
            cin>>nAux>>m>>n;
            for (j = 0; j < t; j++)
            {
                if(nombres[j].first == nAux) break;
            }
            if(n != 0) nombres[j].second = nombres[j].second - (m -(m%n));
            
            for (k = 0; k < n; k++)
            {
                cin>>nAux;
                for (l = 0; l < t; l++)
                {
                    if(nombres[l].first == nAux) break;
                }
                nombres[l].second = nombres[l].second + m/n;
            }
        }

        if(lastline) cout<<endl;
        for (i = 0; i < t; i++)
        {
            cout<<nombres[i].first<<" "<<nombres[i].second<<endl;

        }
        lastline = true;
              
    }

    return 0;
}
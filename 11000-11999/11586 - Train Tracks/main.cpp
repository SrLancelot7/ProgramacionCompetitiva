#include<stdio.h>
#include<iostream>
#include <sstream>

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

   int t,loop,piezas;
   string line;
   cin>>t;

   getline(cin,line);
   while(t--){
        loop = 0;
        piezas = 0;
        getline(cin,line);

        istringstream is(line);
        string n;
        while(is >> n){
            piezas++;
            if(n=="FF") loop++;
            else if(n=="MM") loop--;
        }

        if(loop==0 and piezas > 1) cout<<"LOOP\n";
        else cout<<"NO LOOP\n";
    } 

    return 0;
}
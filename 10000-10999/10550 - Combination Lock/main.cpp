#include<stdio.h>
#include<iostream>

//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

using namespace std;

int grados(int NumIni,int pri,int seg,int ter)
{
    int g = 1080;
    if (NumIni <= pri){
        g = g + (40 - (pri - NumIni)) * 9; 
    }
    else{
        g = g + (NumIni - pri) * 9;
    }

    if (pri <= seg){
        g = g + (seg - pri) * 9; 
    }
    else{
        g = g + (40 - (pri - seg)) * 9;
    }

    if (seg <= ter){
        g = g + (40 - (ter - seg)) * 9; 
    }
    else{
        g = g + (seg - ter) * 9;
    }


    return g;  
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    while (true){
        int NumIni, pri, seg, ter;
        cin >> NumIni >> pri >> seg >> ter;
        if (NumIni == 0 and pri == 0 and seg == 0 and ter == 0) return 0;
        cout<<grados(NumIni, pri, seg, ter)<<endl;
    }
}
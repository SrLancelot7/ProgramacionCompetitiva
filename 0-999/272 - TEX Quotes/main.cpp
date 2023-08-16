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

    char tex[10001];
    bool tip = false; //false = ``, true = ''
    while(cin.getline(tex,10001))
    {   
        for (int i = 0; tex[i]; i++)
        {
            if(tex[i] == '\"')
            {
                if (tip == true)
                {
                    tex[i] = '\'';
                    cout<<'\'';
                    tip = false;
                }
                else
                {
                    tex[i] = '`';
                    cout<<'`';
                    tip = true;
                }
                
            } 
            cout<< tex[i];
        }
       cout<<endl;
    }

    return 0;
}
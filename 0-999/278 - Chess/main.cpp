#include<stdio.h>
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

//Torre y reina: 
//utiliza el lado mas pequeño como respuesta
int rookAndQueen(int m, int n){
    if(m > n)
        return n;
    else
        return m;   
}

//Caballo:
//calcula la mitad de m y la multiplica por n
//casos especiales si alguna o ambas son impares 
int knight(int m,int n){
    int ans;

    if(m%2 == 0)
        ans = (m/2) * n;
    else
        if(n%2 == 0)
            ans = (n/2) * m;
        else
            ans = (m/2 + 1) * (n/2 + 1) + (m/2) * (n/2);    

    return ans;
}

//Rey:
//calcula la mitad de m y la multiplica por la mitad de n
//casos especiales si alguna o ambas son impares 
int King(int m,int n){
    int ans;
    if(m%2 == 0)
        ans = m/2;
    else
        ans = m/2 + 1;
    
    if(n%2 == 0)
        ans *= n/2;
    else
        ans *= (n/2 + 1);

    return ans;
}

//recibe los datos y calcula cual funcion usar
int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t,m,n,ans;
    char c;
    scanf("%d ",&t);
    while(t--){
        scanf(" %c %d %d",&c,&m,&n);
        switch (c)
        {
        case 'r':
            ans = rookAndQueen(m,n);
            break;
        case 'k':
            ans = knight(m,n);
            break;
        case 'Q':
            ans = rookAndQueen(m,n);
            break;
        case 'K':
            ans = King(m,n);
            break;
        }
        printf("%d\n",ans);
    }

    return 0;
}
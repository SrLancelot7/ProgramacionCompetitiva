#include<stdio.h>
#include <vector>
using namespace std;
//antes de compilar cualquier cosa, acuerdate de guardar lo que cambiaste

void calcSubset(std::vector<int>& arr,vector<vector<int>>& res, vector<int>& subset,int index){
    res.push_back(subset);
    for (int i = index; i < arr.size(); i++){
        subset.push_back(arr[i]);
        calcSubset(arr,res,subset,i+1);
        subset.pop_back();
    }
    
}

vector<vector<int>> subsets(vector<int>& arr){
    
    vector<int> subset;
    vector<vector<int>> res;
    int index = 0;
    calcSubset(arr,res,subset,index);
    return res;
}

int main()
{
    #ifndef ONLINE_JUDGE
    
        // For getting input from input.txt file
        freopen("input.txt", "r", stdin);
    
        // Printing the Output to output.txt file
        freopen("output.txt", "w", stdout);
    
    #endif

    int t,n,p,input,sum;
    bool encontrado;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%d",&p);

        vector<int> arr;

        for (int i = 0; i < p; i++){
            scanf("%d",&input);
            arr.push_back(input);
        }
        
        vector<vector<int>> res = subsets(arr);

        encontrado = false;
        for (int i = 0; i < res.size(); i++) {
            sum=0;
            for (int j = 0; j < res[i].size(); j++)
                sum += res[i][j];
            if(sum == n){
                encontrado = true;
                break;
            }
        }
        if(encontrado)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}
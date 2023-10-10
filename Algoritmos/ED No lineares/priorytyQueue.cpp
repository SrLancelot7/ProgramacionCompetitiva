#include<queue>
#include<stdio.h>

int main(){
    int arr[7] = {10,2,3,4,8,9,5};

    std::priority_queue<int> pq;
    for (int i = 0; i < 7; i++)
        pq.push(arr[i]);
    
    while (!pq.empty()){
        printf("%d ",pq.top());
        pq.pop();
    }

    

    return 0;
    
}
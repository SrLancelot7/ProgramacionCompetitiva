#include<stdio.h>
#include<set>

int main(){

    std::set<int> val = {-12,123,213,1,3};

    std::set<int>::iterator it;

    for (it = val.begin(); it != val.end(); it++)
        printf("key: %d\n",*it);
    
    printf("size of map: %d",val.size());

    return 0;
    
}
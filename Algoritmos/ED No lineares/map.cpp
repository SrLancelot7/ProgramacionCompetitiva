#include<map>
#include<string>

int main(){
    std::map<std::string,int> map;

    map["uno"] = 1;
    map["dos"] = 2;
    map["tres"] = 3;
    map["cuatro"] = 3;

    std::map<std::string,int>::iterator it;

    for (it = map.begin(); it != map.end(); it++)
        printf("key: %s, value: %d\n",it->first,it->second);
    
    printf("size of map: %d",map.size());

    return 0;
    
}
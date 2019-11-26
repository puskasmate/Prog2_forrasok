#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>


typedef std::pair<std::string, int> pair;


int main()
{
    std::map<std::string, int> map= {
        {"Travis Scott", 999}, {"Kendrick Lamar", 522}, {"Kanye West", 625}, {"Video Info 1", 9999}, {"Mané", 999999},
    };
    
    std::vector<pair> vec;
    
    std::copy(map.begin(), map.end(), std::back_inserter(vec));
    std::sort(vec.begin(), vec.end(),
              [](const pair& l, const pair& r){
                  return l.second < r.second;
              });
    
    for(auto const &pair: vec){
        std::cout << '{' << pair.first << ", " << pair.second << '}' << std::endl;
    }



return 0;


}

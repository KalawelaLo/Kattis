#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string line, tmp;
    map<string, int> hay_map;
    std::map<string,int>::iterator it;
    int num_of_entries, num_of_applic, monies;
    cin >> num_of_entries >> num_of_applic;
    for (int i = 0; i< num_of_entries; i++){
        cin >> tmp >> monies;
        hay_map[tmp] = monies;
    }
    monies = 0;
    while(cin >> line){
        if(line == "."){
            cout << monies << endl;;
            monies = 0;
        }
        else{
            it = hay_map.find(line);
            if(it != hay_map.end()){
                monies += it->second;
            } 
        }
    }
    return 0;
}
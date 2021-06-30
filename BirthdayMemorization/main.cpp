#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
class birthday{
public:
    string name;
    string birth;
    int likeability;
    bool operator==(const birthday &other) const {
        if(this->birth == other.birth){
            return true;
        }
        return false;
    }
    bool operator<(const birthday &other) const{
        if(this->likeability < other.likeability){
            return true;
        }
        return false;
    }
    
};

int main() {
    int entries;
    cin >> entries;
    vector<birthday> memories;
    for(int i = 0; i < entries; i++){
        bool foundMatch = false;
        birthday tmp;
        cin >> tmp.name >> tmp.likeability >> tmp.birth;
        for(int j = 0; j < memories.size(); j++){
            if(memories[j]==tmp){
                foundMatch = true;
                if(memories[j]<tmp){
                    memories[j]=tmp;
                }
            }
        }
        if(!foundMatch){
            memories.push_back(tmp);
        }
    }
    vector<string> names;
    for(birthday t : memories){
        names.push_back(t.name);
    }
    sort(names.begin(), names.end());
    cout << names.size() << "\n";
    for(int i =0; i<  names.size(); i++){
        if(i == names.size() -1){
            cout << names[i] << endl;
        }
        else {
            cout << names[i] << "\n";
        }
    }
    
}

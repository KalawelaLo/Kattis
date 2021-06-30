#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int location, input, loc1, loc2;
    cin >> location >> input;
    vector< set< int  > > connections(location);
    for(int i = 0; i < input; i++){
        cin >> loc1 >> loc2;
        auto tmp = connections[loc1];
        tmp.insert(loc1);
        tmp.insert(loc2);
        connections[loc1] = tmp;
    }
    for(int i = 0; i < location; i++){
        for(int j = 0; j< location ; j++){
            if(connections[i].find(j) != connections[i].end() && j != i){
                connections[j].insert(connections[i].begin(), connections[i].end())
            }
        }
    }






    return 0;
}
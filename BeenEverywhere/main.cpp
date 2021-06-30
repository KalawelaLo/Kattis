#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    set<string> visited;
    int res, test_case, city_list_size;
    string line;
    cin >> test_case >> city_list_size;
    for(int j = 0; j < test_case; j++){
        for (int i = 0; i < city_list_size; i++){
            cin >> line;
            visited.insert(line);
        }
        cin >> city_list_size;
        cout << visited.size() << endl;
        visited.clear();
    }
    return 0;
}

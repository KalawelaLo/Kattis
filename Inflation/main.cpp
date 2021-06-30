#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int max_can;
    float res;
    cin >> max_can;
    vector<int> canisters;
    for(int i = 0; i < max_can; i++){
        int tmp;
        cin >> tmp;
        canisters.push_back(tmp);
    }
    res = 1.0f;
    sort(canisters.begin(), canisters.end());
    while(!canisters.empty()){
        int max_element = canisters.back();
        canisters.pop_back();
        if(max_element == max_can){
            max_can--;
            continue;
        }
        else if (max_can < max_element){
            cout << "impossible\n";
            return 0;
        }
        else {
            if(float(max_element)/float(max_can) < res){
                res = float(max_element)/float(max_can); 
            }
            max_can--;
        }
    }
    cout << res << endl;

    return 0 ;
}
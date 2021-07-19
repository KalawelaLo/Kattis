#include <iostream>

using namespace std;
int main () {
    int cases, c_num, res;
    cin >> cases;
    while(cases--){
        cin >> c_num >> res;
        res = res*(res+1)/2 + res;
        cout << c_num << " " << res << endl;
    }
    return 0;
}
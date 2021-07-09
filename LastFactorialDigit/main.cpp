#include <iostream>
using namespace std;
int main () {
    int in, cases, res;
    cin >> cases;
    while(cases--) {
        cin >> in;
        if(in >= 5){
            res = 0;
        } else if(in == 4){
            res = 4;
        } else if(in == 3){
            res = 6;
        } else if (in == 2) {
            res = 2;
        } else {
            res = 1;
        }
        cout << res << endl;
    }
    return 0;
}
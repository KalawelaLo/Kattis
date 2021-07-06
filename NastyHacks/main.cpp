#include <iostream>

using namespace std;

int main() {
    int cases, r, e, c;
    cin >> cases;
    while(cases--){
        cin >> r >> e >> c;
        if(r == e-c){
            cout << "does not matter" << endl;
        } else if(r < e-c){
           cout << "advertise" << endl;
        } else {
            cout << "do not advertise" << endl; } }
}
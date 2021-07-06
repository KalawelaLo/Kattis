#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string in;
    set< string > ND;
    while(cin>>in) {
        if( ND.find(in) == ND.end() ){
            ND.insert(in);
        } else {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
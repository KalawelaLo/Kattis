#include <iostream>
#include <string>
using namespace std;
int main() {
    string mon;
    int num;
    cin >> mon >>num;
    if((mon == "OCT" && num == 31)||(mon=="DEC"&&num==25)){
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }
    return 0;
}
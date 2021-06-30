#include <iostream>
#include <string>
using namespace std;
int main(){
    string input;
    cin >> input;
    input = input + " " + input + " " + input;
    cout << input << endl;
    return 0;
}
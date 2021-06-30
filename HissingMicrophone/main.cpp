#include <iostream>
#include <string>
#include <regex>

using namespace std;
 int main() {
     string in;
    cin >> in;
     if (regex_match (in, regex(".*ss.*") )){
        cout << "hiss\n";
     }
     else {
         cout << "no hiss\n";
     }
     return 0;
 }
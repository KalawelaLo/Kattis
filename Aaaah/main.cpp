#include <iostream>
#include <string>
using namespace std;
int main() {
    string pat, doc;
    cin>> pat >> doc;
    if(pat.size() >= doc.size() ){
        cout << "go\n";}
    else{
        cout << "no\n";}
    return 0;}
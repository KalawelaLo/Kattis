#include <iostream>
#include <string>

using namespace std;

int main() {
    string in;
    cin >> in;
    string out;
    out = in.at(0);
    for(int i = 0; i<in.size() ;i++){
        if(out.back() != in[i]){
            out += in[i];
        }
    }
    cout << out << endl;
    return 0;
}
#include <iostream> 
#include <string>
using namespace std;
int main() {
    string in;
    int res;
    cin >> in;
    res = in.size();
    for(int i = 0; i < in.size(); i++){
        if((i%3 == 0 && in[i]== 'P')||(i%3 == 1 && in[i]== 'E')||(i%3 == 2 && in[i] == 'R')){
            res--;}}
    cout << res << endl;; 
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int cases, tmp, res = 0;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> tmp;
        if(tmp < 0){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
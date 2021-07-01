#include <iostream>
using namespace std;

int main() {
    int cases, multiple, pow, tmp , res = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> multiple;
        pow = multiple%10;
        multiple /= 10;
        tmp = multiple;
       // cout << multiple << endl;
        if(pow == 0){
            tmp = 1;
        }
        if(pow != 1 || pow != 0){
            for(int j = 1; j < pow; j++){
                tmp = tmp * multiple;
            }
        }
        res += tmp;
    }
    cout << res << endl;
    return 0;
}
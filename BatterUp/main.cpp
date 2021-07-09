#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int cases;
    double in, total = 0, res = 0;
    cin >> cases;
    while(cases --){
        cin >> in;
        if(in == -1){
            continue;
        }
        else{
            res += in;
            total++;
        }
    }
    res = res/total;
    cout << fixed << setprecision(17) <<res << endl;
    return 0;
}
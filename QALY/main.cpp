#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int cases;
    float weight, period, res = 0;
    cin >> cases;
    while(cases--){
        cin >> weight >>period;
        res += weight*period;
    }
    cout << fixed << setprecision(3) << res <<endl;
    return 0;
}
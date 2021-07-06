#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double cost, w, h, cases, res = 0;
    cin >> cost >>cases;
    while(cases--){
        cin >> w >> h;
        res += (w*h*cost);
    }
    cout << setprecision(7)  << fixed << res << endl;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a, b, c, d;
    cout << fixed << setprecision(3);
    while(true) {
        cin >> a >> b;
        if(a == b && a == 0){
            break;
        } else {
            c = 0.5/b;
            d = 1.0;
            while(a > 0){
                if(d < c){
                    d  = (d - b + 0.25 / d) / (1.0 - b);
                } else {
                    d *= 1.0 + b;
                }
                a -= 1;
            }
            cout << d << endl;
        }
    }
    return 0;
}
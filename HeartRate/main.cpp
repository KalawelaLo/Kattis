#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cases;
    float b, p;
    cout << fixed << setprecision(4);
    cin >> cases;
    while(cases--){
        cin >> b >> p;
        cout << 60*(b-1)/p << " "<< 60*b/p << " " << 60*(b+1)/p << endl;
    }
    return 0;
}
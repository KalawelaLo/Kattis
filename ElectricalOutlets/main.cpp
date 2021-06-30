#include <iostream>

using namespace std;
int main() {
    int cases, outlets, sum, outlet_amount;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> outlets;
        sum = 0;
        for (int k = 0; k < outlets; k++){
            cin >> outlet_amount;
            sum += outlet_amount;
        }
        sum -= (outlets -1);
        cout << sum << "\n";
    }

    return 0;
}
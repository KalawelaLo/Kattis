#include <iostream>
using namespace std;
int main() {
    int month_limit , spent , leftover, months;
    cin >> month_limit >> months;
    leftover = (months +1 ) * month_limit;
    for(int i = 0; i < months; i++){
        cin >> spent;
        leftover -= spent;
    }
    cout << leftover << endl;
    return 0;
}
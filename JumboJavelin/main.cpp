#include <iostream>
using namespace std;
int main () {
    int rods, size, rod;
    cin >> rods;
    size = 0;
    for(int i = 0; i < rods; i++){
        cin >>rod;
        size += rod;
    }
    cout << size - rods +1 << endl;
    return 0;
}
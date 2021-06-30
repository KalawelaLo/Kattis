#include <iostream>
using namespace std;
int main() {
    int iterations;
    int square_size = 2;
    cin >> iterations;
    for (int i = 0 ; i < iterations; i++){
        square_size += square_size -1;
    }
    cout << square_size*square_size << "\n";
    return 0;
}
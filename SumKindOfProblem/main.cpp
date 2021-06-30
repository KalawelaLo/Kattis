// .   0-n sum = n(n+1) / 2 .  oddSumm = n^2 3. Sum of first n even numbers = n * (n + 1)

#include <iostream> 
using namespace std;
int main() {
    int cases, case_num, y;

    cin >> cases;
    for (int i  = 0; i < cases; i++){
        cin >> case_num >> y;
        cout << case_num << " " << y*(y+1)/2 << " " << y*y << " " << y*(y+1) << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int num1, num2, tmp;
    cin >> num1 >> num2;
    if(num2 < num1){
        tmp = num1;
        num1= num2;
        num2 = tmp;
    }
    cout << num1 << " " << num2<< endl;

    return 0;
}
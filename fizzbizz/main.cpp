#include <iostream>

using namespace std;
    int main() {
    int Fizz, Bizz, stop;
    cin >> Fizz >> Bizz >> stop;
    stop++;
    bool  divisible;
    for(int i = 1; i < stop; i++){
        divisible = false;
        if(i%Fizz==0){
            cout << "Fizz";
            divisible = true;
        }
        if(i%Bizz==0){
            cout << "Buzz";
            divisible = true;
        }
        if(!divisible){
            cout << i;
        }
        cout << endl;
    }
return 0;
}

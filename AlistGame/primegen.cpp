#include <iostream>
using namespace std;

bool prime(int k) {
    for (int i = 3; i < k ; i+=2){
        if(k%i == 0){
            return false;
        }
    }
    return true;
}

int main () {
    int primes = 1;
    cout <<  "{ 2 ";
    for  (int i = 3; i < 31623 ; i+=2){
        if(prime(i)){
            cout << "," << i;
            primes ++;
        }
    }
    cout << "}" << endl;
    cout << primes << endl;
    return 0;
}
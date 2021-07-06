#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int a){
    int lim = sqrt(a)+1;
    for(int j = 2; j < lim; j++){
        if(a%j == 0) {
            return false;}
    }
    return true;
}


int getRange(int a, int b){
    int count = 0;
    while(a < b){
        a += 2;
        if(isPrime(a)) {
             count++; }
    }
    return count;
}

int main() {
    int cases, prime1, prime2, res;
    cin >> cases;
    while(cases--){
        cin >> prime1 >> prime2;
        if(prime1 > prime2){
            int tmp = prime1;
            prime1 = prime2;
            prime2 = tmp;
        }
        res = getRange(prime1, prime2);
        cout << res << endl;
    }
    return 0;
}
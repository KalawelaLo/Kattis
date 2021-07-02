#include <iostream>

using namespace std;

int main() {
    int a, b, tmpmod, tmpnum = 0;
    cin >> a >> b;
    for(int i = 0; i < 3; i++){
        tmpmod = a%10;
        a/=10;
        tmpnum += tmpmod;
        if(i < 2){
            tmpnum*=10;}}
    a = tmpnum; tmpnum = 0;
    for(int i = 0; i < 3; i++){
        tmpmod = b%10;
        b/=10;
        tmpnum += tmpmod;
        if(i < 2){
            tmpnum*=10;}}
    b = tmpnum;
    if(b>a){
        cout << b << endl;
    } else{
        cout << a << endl;
    }

    return 0;
}
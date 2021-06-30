#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    long x, y;
    while(cin>>x>>y){
        if(cin){  
            if(y>x){
                long tmp = x;
                x = y;
                y = tmp;
            }
            cout << abs(x-y) << "\n";
        }
    }
    return 0;
}
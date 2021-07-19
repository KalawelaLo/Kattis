#include <iostream>

using namespace std;
int main () {
    int in = 2;
    cout << in << endl;
    while(in < 99){
        cin >> in;
         if(in == 99){
            return 0;
        }
        if((in + 1)%3==0){
            in++;
        } else if ((in + 2)%3 == 0){
          in += 2;
        }
        else {
            in++;
        }
        cout << in << endl;
        if(in == 99){
            return 0;
        }
    }
    return 1;
}
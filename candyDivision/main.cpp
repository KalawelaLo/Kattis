#include <iostream>
using namespace std;
int main(){
    long int candy_num;
    cin >> candy_num;
    cout << 0 << " ";
    long int i = 2;
    int index = 0;
    long* factors;
    if(candy_num < 1000){
         factors = new long int[32];
    }
    else if (candy_num < 100000){
        factors = new long int[144];
    }
    else{
        factors = new long int[400];
    }
    factors[index] = 1; index++;
    while(i * i <= candy_num){
        if(candy_num%i == 0){
            factors[index] = i; index++;
            cout << i - 1 << ' ';
            if(i * i == candy_num){
                index--;
            }
        }
        i++;
    }
    for(int i = index - 1; i > 0; i--){
        cout << candy_num/factors[i] - 1 << " ";
    }
    cout << candy_num/factors[0] - 1 << endl;
    return 0;
}

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string in;
    cin >> in;
    cout << fixed << setprecision(15);
    double whitespace, lower, upper, symbols;
    whitespace = lower = upper = symbols = 0;
    int ascii_code;
    for(int i = 0; i < in.size(); i++){
        ascii_code = (int) in[i];
        if(ascii_code == 95){
            whitespace++;
        }
        else if((65<= ascii_code)&&(ascii_code <= 90)){
            upper++;
        }
        else if((97<= ascii_code)&&(ascii_code <= 122)){
            lower++;
        }
        else{
            symbols++;
        }
    }
    cout << whitespace/in.size() <<  "\n"<< lower/in.size()  <<  "\n"<< upper/in.size()  <<  "\n"<< symbols/in.size() <<  endl;

    return 0;
}
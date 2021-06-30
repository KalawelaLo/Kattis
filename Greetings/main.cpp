#include <iostream>
#include <string>
using namespace std;
int main(){
    string input;
    int number_of_e = 0;
    cin >> input;
    for(int i = 0; i < input.size(); i++){
        if(input[i]=='e'){
            number_of_e++;
        }
    }
    input[input.size()-1]='e';
    for(int i = 0; i<number_of_e-1; i++){
        input += 'e';
    }
    input += 'y';
    cout << input << endl;
    return 0;
}
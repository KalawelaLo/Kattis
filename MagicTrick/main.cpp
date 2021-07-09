#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string input;
    set <char> cards;
    cin >> input;
    bool repeats = false;
    for(int i =0;i<input.size();i++){
        if(cards.find(input[i])==cards.end()){
            cards.insert(input[i]);
        } else {
            repeats = true;
            break;
        }
    }
    if(repeats){
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}
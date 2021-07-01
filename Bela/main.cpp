#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<char, int> dom;
    map<char, int> ndom;
    dom['A'] = 11;
    dom['K'] = 4;
    dom['Q'] = 3;
    dom['J'] = 20;
    dom['T'] = 10;
    dom['9'] = 14;
    dom['8'] = 0;
    dom['7'] = 0;

    ndom['A'] = 11;
    ndom['K'] = 4;
    ndom['Q'] = 3;
    ndom['J'] = 2;
    ndom['T'] = 10;
    ndom['9'] = 0;
    ndom['8'] = 0;
    ndom['7'] = 0;

    int hands, sum = 0;
    char domin;
    string card;
    cin >> hands >> domin;

    for(int i = 0; i < hands*4 ; i++){
        cin >> card;
        if(card[1]==domin){
            sum += dom[card[0]];
        }
        else{
            sum += ndom[card[0]];
        }
    }
    cout << sum << endl;
    return 0;
}
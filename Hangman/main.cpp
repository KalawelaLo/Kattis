#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int wrong_guesses = 0;
    string word, guess, guesses;
    cin >> word >> guesses;

    set<char> letters_within;

    int stop = word.size();
    for(int i = 0; i < stop; i++ ){
        letters_within.insert(word[i]);
    }

    stop = guesses.size();
    for(int i = 0 ; i < stop; i++){
        if(letters_within.find(guesses[i]) != letters_within.end()){
            letters_within.erase(guesses[i]);
        }
        else {
            wrong_guesses ++;
        }
        if(letters_within.size() == 0){
            cout << "WIN" << endl;
            break;
        }
        if(wrong_guesses == 10){
           cout << "LOSE" << endl;
            break; 
        }
    }
    return 0;
}
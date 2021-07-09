#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;
int main () {
    map< string , string > dictionary;
    string input, word1, word2, querie;
    getline(cin , input);
    stringstream con;
    con << input;
    while( input != ""){
        con >> word1 >> word2;
        con.clear();
        dictionary[word2] = word1;
        getline(cin , input);
        con << input;
    }
    while(cin >> querie){
        if(dictionary.find(querie) != dictionary.end()){
            cout << dictionary[querie] << endl;
        } else {
            cout << "eh" << endl;
        }
    }
    return 0;
}
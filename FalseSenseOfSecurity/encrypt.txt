#include <iostream>
#include <map>
#include <string>
using namespace std;

pair<map<string, string> ,map<string, string> > buildDictionary() {
    map<string, string> char_map, bchar_map;
    char_map["A"]=".-";
    char_map["B"]="-...";
    char_map["C"]="-.-.";
    char_map["D"]="-..";
    char_map["E"]=".";
    char_map["F"]="..-.";
    char_map["G"]="--.";
    char_map["H"]="....";
    char_map["I"]="..";
    char_map["J"]=".---";
    char_map["K"]="-.-";
    char_map["L"]=".-..";
    char_map["M"]="--";
    char_map["N"]="-.";
    char_map["O"]="---";
    char_map["P"]=".--.";
    char_map["Q"]="--.-";
    char_map["R"]=".-.";
    char_map["S"]="...";
    char_map["T"]="-";
    char_map["U"]="..-";
    char_map["V"]="...-";
    char_map["W"]=".--";
    char_map["X"]="-..-";
    char_map["Y"]="-.--";
    char_map["Z"]="--..";
    char_map["_"]="..--";
    char_map[","]=".-.-";
    char_map["."]="---.";
    char_map["?"]="----";
    for (auto const& [key , val] : char_map){
        bchar_map[val]=key;
    }
    return make_pair(char_map, bchar_map);
}

pair<string, string> encode( map<string, string> char_map, string to_encode){
    string res, tmp, num;
    for(int i = 0; i < to_encode.size(); i++){
        tmp = to_encode[i];
        num += to_string( char_map[tmp].size() );
        res += char_map[tmp];
    }
    return make_pair(res, num);
}

string decode(map<string, string> char_map, string to_decode, string key){
    string res;
    int len, ind;
    ind = 0;
    for(int i = key.size()-1; i > -1; i--){
        len = stoi( to_string( key[i] ) ) - 48;
        res += char_map[to_decode.substr(ind, len)];
        ind += len;
    }
    return res;
}



int main() {
    pair<map<string, string>, map<string, string> > char_map;
    char_map = buildDictionary();
    string line;
    while(cin >> line){
        pair<string, string> a;
        a = encode(char_map.first, line);
        line = decode(char_map.second, a.first, a.second);
        cout << line << endl;
    }
    return 0;
}

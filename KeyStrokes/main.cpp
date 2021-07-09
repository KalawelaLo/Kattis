#include <vector>
#include <iostream>
#include <string>

using namespace std;
int main () {
    string input;
    vector<char> directions;
    cin >> input;
    for(int i =input.size() -1; i > -1; i--){
        directions.push_back(input[i]);
    }
    int position = 0;
    input.clear();
    while(!directions.empty()) {
        cout << input << " " << position <<endl;
        if(directions.back() == 'L'){
            if(position > 0){
                position--;
            }  
        } else if (directions.back() == 'R'){
            if(position < directions.size()){
                position++;
            }
        } else if (directions.back() == 'B'){
            string tmp = input.substr(position);
            input.resize(position-1);
            input += tmp;
            position--;
        } else {
            if(input.size() > position){
                    string tmp = input.substr(position);
                    input.resize(position);
                    input += directions.back();
                    input += tmp;
            } else if (input.size() == 0) {
                input = directions.back();
            } else {
                input+=directions.back();
            }
            position++;
        }
        directions.pop_back();
    }
    cout<< input << endl;
    return 0;
}
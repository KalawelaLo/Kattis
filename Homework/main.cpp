#include <iostream>
#include <string>

using namespace std;
int number_of_problems;

int main() {
    
    string line;
    cin >> line;
    int numbers = 1;
    int hyphens, semi;
    semi = hyphens = 0;
    for(int i = 0; i < line.size() ; i++) {
        if(line[i] == '-'){
            numbers++;
            hyphens++;
        }
        if(line [i] == ';'){
            numbers++;
            semi++;
        }
    }
    number_of_problems = semi + 1;
    int * numArray = new int[numbers];
    int nums = 0;
    string tmpNum;
    for(int i = 0; i < line.size() ; i++){
        if(line[i] == '-' || line [i] == ';'){
            numArray[nums] = stoi(tmpNum);
            nums++;
            tmpNum.clear();
        }
        else{
            tmpNum += line[i];
        }
    }
    numArray[nums] = stoi(tmpNum);
    nums = 0;
    for(int i = 0; i < line.size(); i++){
        if(line[i]==';'){
            nums++;
        }
        if(line[i]=='-'){
            int range = numArray[nums+1]-numArray[nums];
            number_of_problems += range;
            nums++;
        }
    }

    cout << number_of_problems << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <set>
#include <stack>
using namespace std;
int main () {
    int cases, size;
    string input, new_input;
    cin >> cases;
    while(cases){
        cases--;
        cin >> input;
        size = input.size();
        int stones, lowest;
        stones = 0;
        set<pair<string, int> > visited;
        stack<pair<string, int> > explore;
        for(int i = 0; i < size; i++){
            if(input[i]=='o'){
                stones++;
            }
        }
        explore.push(make_pair(input, stones));
        lowest = stones;
        pair<string, int> tmp;
        while(!explore.empty() && lowest != 0){
            tmp = explore.top();
            explore.pop();
            visited.insert(tmp);
            for(int i = 0; i < size-2; i++){
                if(tmp.first[i]=='o'&&tmp.first[i+1]=='o'&&tmp.first[i+2]=='-'){
                    new_input = tmp.first;
                    new_input[i]='-'; new_input[i+1]='-'; new_input[i+2]='o';
                    if(visited.find(make_pair(new_input, tmp.second - 1 ))==visited.end()){
                        lowest = min(lowest, tmp.second-1);
                        explore.push(make_pair(new_input, tmp.second - 1 ));
                    }
                }
            }
            for(int i = size; 2 < i; i--){
                if(tmp.first[i]=='o'&&tmp.first[i-1]=='o'&&tmp.first[i-2]=='-'){
                    new_input = tmp.first;
                    new_input[i]='-'; new_input[i-1]='-'; new_input[i-2]='o';
                    if(visited.find(make_pair(new_input, tmp.second - 1 ))==visited.end()){
                        lowest = min(lowest, tmp.second-1);
                        explore.push(make_pair(new_input, tmp.second - 1 ));
                    }
                }
            }
        }
        cout << lowest << endl;
    }
    return 0;
}
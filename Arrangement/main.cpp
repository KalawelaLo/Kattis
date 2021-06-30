#include <iostream> 
#include <vector>
using namespace std;

int main() {
    int rooms, teams, left_over;
    cin >> rooms >> teams;
    left_over = rooms % teams;
    vector<int> arrangement(rooms, teams/rooms);
    for(int i = 0; i < arrangement.size(); i++){
        for(int j = 1; j < arrangement[i]; j++){
            cout << "*";
        }
        if(left_over){
            cout << "*";
            left_over--;
        }
        cout << "\n";
    }
    return 0;
}
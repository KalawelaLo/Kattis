#include <iostream>
#include <queue>
#include <string>
#include <set>

using namespace std;

bool validMove(int x, int y, int size){
    if(0 <= x && x < size && 0 <= y && y < size){
        return true;
    }
    return false;
}

int main () {
    int size = 0;
    cin >> size;
    string * map = new string[size];
    int Kx, Ky;
    Kx = Ky = -1;
    for(int i = 0; i < size; i ++){
        cin >> map[i];
        if(Kx == -1){
            for(int j = 0; j < size; j++){
                if(map[i][j]=='K'){
                    Kx = i; Ky = j;
                }
            }
        }
    }
    pair<int, int> validMoves[8];
    validMoves[0]= make_pair(2, 1);
    validMoves[1]= make_pair(2, -1);
    validMoves[2]= make_pair(-2, 1);
    validMoves[3]= make_pair(-2, -1);
    validMoves[4]= make_pair(1, 2);
    validMoves[5]= make_pair(1, -2);
    validMoves[6]= make_pair(-1, 2);
    validMoves[7]= make_pair(-1, -2);



    int moves = 0;
    set< int > visited;
    queue<pair<int, int> > where_to_check;
    where_to_check.push(make_pair(Kx + Ky*size, moves));
    pair<int, int> tmp;
    bool found = false;
    while(!where_to_check.empty()){
        tmp = where_to_check.front();
        where_to_check.pop();
        if(tmp.first == 0){
            found = true;
            break;
        }
        if(visited.find(tmp.first)==visited.end()){
            visited.insert(tmp.first);
            int x = tmp.first%size;
            int y = tmp.first/size;
            for(int i = 0; i < 8; i++){
                if(validMove(x + validMoves[i].first, y +validMoves[i].second, size)){
                    if(map[x+validMoves[i].first].at(y+validMoves[i].second)=='.'){
                        where_to_check.push(make_pair((x + validMoves[i].first)+size*(y +validMoves[i].second), tmp.second + 1));
                    }
                }
            }
        } else {
            continue;
        }

    }
    if(found){
        cout << tmp.second << endl;
    } else {
        cout << -1 << endl; 
    }



    return 0;
}
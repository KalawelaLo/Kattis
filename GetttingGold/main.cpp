#include <string>
#include <iostream>
#include <vector>
#include <stack>
#include <set>

using namespace std;


int main() {
    string * map;
    int w , h, gold;
    gold = 0;
    cin >> w >> h;
    map = new string[h];
    pair<int,int> plypos;
    for(int i = 0; i < h; i++){
        cin >> map[i];
        for(int j = 0; j < w; j++){
            if(map[i].at(j)=='P'){
                plypos = make_pair(i,j);
            }
        }
    }
    int num_of_directions = 4;
    pair<int,int> directions[num_of_directions];
    directions[0] = make_pair(-1,0);
    directions[1] = make_pair(1,0);
    directions[2] = make_pair(0,-1);
    directions[3] = make_pair(0,1);

    stack<pair<int,int> > q;
    set<pair<int, int> > explored;
    q.push(plypos);
    pair<int,int> tmp, tmp2;
    while(!q.empty()){
        tmp = q.top();
        q.pop();
        explored.insert(tmp);
        if(map[tmp.first].at(tmp.second)=='G'){
                gold++;
        }
        if(map[tmp.first].at(tmp.second)=='#'){
               continue;
        }
        bool travable = true;
        vector<pair<int, int> > tmpAr;
        for(int i = 0; i < num_of_directions; i++){
            if(explored.find((make_pair(tmp.first+directions[i].first,tmp.second+directions[i].second)))==explored.end()){
                if(map[tmp.first+directions[i].first].at(tmp.second+directions[i].second)=='#'){
                    explored.insert(make_pair(tmp.first+directions[i].first,tmp.second+directions[i].second));
                    continue;
                }
                if(map[tmp.first+directions[i].first].at(tmp.second+directions[i].second)=='T'){
                    travable = false;
                    break;
                }
                tmpAr.push_back(make_pair(tmp.first+directions[i].first,tmp.second+directions[i].second));
            } 
        }
        if(travable){
            for(int i = 0; i < tmpAr.size(); i++){
                q.push(tmpAr[i]);
            }
        }
    }
    //for(int i = 0; i < h; i++){ cout << map[i] << endl; }
    cout << gold << endl;
    return 0;
}
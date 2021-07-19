#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct v{
    int x, y;
};


int main () {

    int vert;
    while(true){
        cin >> vert;
        if(vert == 0){
            break;
        }
        vector<v> vertices (vert);
        for(int i = 0; i < vert; i++){
            cin >> vertices[i].x >> vertices[i].y;
        }

        int res = (vertices[vert - 1].x *vertices[0].y - vertices[vert-1].y*vertices[0].x); 
        for(int i = 0; i < vert - 1; i++){
            res += (vertices[i].x *vertices[i+1].y - vertices[i].y*vertices[i+1].x);
        }
        
        cout << fixed << setprecision(1);
        if(res > 0){
            cout << "CCW " << res/2.0 << endl;
        } else {
            cout << "CW " << -1*res/2.0 << endl;
        }

    }
    return 0;
}
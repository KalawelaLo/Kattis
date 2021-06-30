#include <iostream>
#include <vector>
#include <string>
using namespace std;
class point {
    public:
    int x, y;
    point() {x=0; y = 0;}
    point(int _x, int _y) {x = _x   ; y= _y;}
    point(const point &p1) {x = p1.x; y = p1.y; }
    void set(int _x, int _y) {x= _x; y=_y;}
    friend ostream& operator<<(ostream& os, const point& dt){
        os << "(" << dt.x << "," << dt.y << ")";
        return os;
    }
    friend bool operator==(const point& l, const point& r){
        return ((l.x == r.x) && (l.y == r.y));}};

int ** maze;
int Y_size, X_size;
vector<point> region;

bool inVisited(point dest){
    for(int i = 0; i < region.size(); i++){
        if (dest == region[i]){
            return true;}}
    return false;}

bool validPoint(point src, point dest){
    if((src.y < Y_size) && (src.y >= 0) && (src.x < X_size)&&(src.x >=0)){
        if(maze[src.x][src.y]==maze[dest.x][dest.y]){
            if(!inVisited(src)){
                return true;}}}
    return false;}

bool pathFind(point src, point dest){
    point points [4];
    points [0].set(src.x + 1, src.y);
    points [1].set(src.x - 1, src.y);
    points [2].set(src.x, src.y + 1);
    points [3].set(src.x, src.y - 1);
    for(int i = 0; i < 4; i++){
        if(validPoint(points[i], dest)){
            if(points[i]==dest){
                region.push_back(points[i]);
                return true;
            }
            region.push_back(points[i]);
            if(pathFind(points[i], dest)){
                return true;
            }
        }
    }
    return false;}

int main() {
    int NumberOfPoints;
    cin >> X_size;
    cin >> Y_size;
    string line;
    maze = new int*[X_size];
    for(int i = 0; i<X_size; i++){
        maze[i]= new int[Y_size];}
    for(int i = 0; i<X_size; i++){
        cin >> line;
        for(int j= 0; j <Y_size; j++){
            maze[i][j] = (int) line[j] - 48;}}
    line.clear();
    cin >> NumberOfPoints;
    for(int i = 0; i<NumberOfPoints; i++){
        int x, y;
        cin >> x >> y;
        point source(x -1, y - 1);
        cin >> x >> y;
        point dest(x - 1, y - 1);
        if(!inVisited(source)){
            if(!inVisited(dest)) {
                region.clear();
            }
            else{
                point tmp = dest;
                dest = source;
                source = tmp;
            }
            region.push_back(source);
        }
        if(source == dest){
            if(maze[source.x][source.y] == 0){
                cout << "binary\n";
            }
            else{
                cout << "decimal\n";
            }
        }
        else if(pathFind(source, dest)){
            if(maze[source.x][source.y] == 0){
                cout << "binary\n";
            }
            else{
                cout << "decimal\n";
            }
        }
        else{
            cout << "neither\n";
        }

    }
   
    return 0;}


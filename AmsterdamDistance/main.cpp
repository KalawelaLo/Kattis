#include <iostream>
#include <set>
#include <vector>
#include <math.h>
#include <list>

using namespace std;
long double inf = (long double)10000000000;

long long m, n;
long double r;

vector<int> dx = {1,-1,0,0};
vector<int> dy = {0,0,1,-1};

long double getdist(long long ax, long long ay, long long bx, long long by) {
    long double straight = (r / n);

    long double radius = (long double)(min(ay,by)) / n * r;
    long double circ = (long double)(2) * M_PI * radius;

    long double curved = (circ / 2) / m;

    long double ans = straight * abs(ay-by) + curved * abs(ax-bx);

    return ans;
}

int main() {
    long long ax,ay,bx,by;
    cin >> m >> n >> r;
    cin >> ax >> ay >> bx >> by;

    vector<vector<long double> > dist(m+1,vector<long double>(n+1,inf));

    set<pair<long double,pair<int,int> > > q;
    dist[ax][ay] = 0;
    q.insert({0,{ax,ay}});

    while(!q.empty()) {
        pair<int,int> curr = q.begin()->second;
        q.erase(q.begin());

        for(int i = 0; i < 4; i++) {
            pair<int,int> next = curr;
            next.first += dx[i];
            next.second += dy[i];

            if(next.first < 0) continue;
            if(next.second < 0) continue;
            if(next.first > m) continue;
            if(next.second > n) continue;

            long double weight = getdist(curr.first,curr.second,next.first,next.second);

            if(dist[next.first][next.second] > dist[curr.first][curr.second] + weight) {
                q.erase({dist[next.first][next.second],next});
                dist[next.first][next.second] = dist[curr.first][curr.second] + weight;
                q.insert({dist[next.first][next.second],next});
            }
        }
    }
    cout << fixed;
    cout.precision(11);
    cout << dist[bx][by] << endl;
}
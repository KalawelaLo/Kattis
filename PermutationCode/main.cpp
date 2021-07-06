#include <math.h>
#include <string>
#include <iostream>
#include <map>

using namespace std;

int main() {
    string a, b, c, tmp;
    int n, sqrtn, r, x, r2;
    map< char, int>  char_map;
    while(cin >> x, x){
        char_map.clear();
        tmp.clear();
        cin >> a >> b >> c;
        n = c.size();
        for(int i = 0; i < n; i++){
            tmp += "#";
        }
        sqrtn = sqrt(n);
        r= (n*sqrtn+x)%n;
        r2 = (r-1+n)%n;
        for(int i = 0; i < a.size(); i++){
            char_map[a[i]] = i;
        }
        while(r2 != r) {
            //m[d_less] = self.p[self.s_i[c[d_less]] ^ self.s_i[m[d_more]]]
            tmp[r2]= b[char_map[c[r2]]] ^ char_map[tmp[r]];
            r= (r-1+n)%n;
            r2 = (r2-1+n)%n;
            cout << tmp << endl; 
        }
        cout << tmp << endl; 
    }
    return 0;
}
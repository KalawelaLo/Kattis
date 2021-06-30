#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#define FORD(i,r,l) for (int i=r;i>=l;i--)

const int base = 1e9;
typedef vector<int> BigInt;

void Set(BigInt &a) {
    while (a.size() > 1 && a.back() == 0) a.pop_back();
}

BigInt Integer(string s) {
    BigInt ans;
    if (s[0] == '-') return ans;
    if (s.size() == 0) {ans.push_back(0); return ans;}
    while (s.size()%9 != 0) s = '0'+s;
    for (int i=0;i<s.size();i+=9) {
        int v = 0;
        for (int j=i;j<i+9;j++) v = v*10+(s[j]-'0');
        ans.insert(ans.begin(),v);
    }
    Set(ans);
    return ans;
}

long long operator % (BigInt a, long long b) {
    Set(a);
    if (b == 0) return -1;
    long long ans = 0;
    FORD(i,a.size()-1,0)
        ans = (ans*(base%b) + a[i]%b)%b;
    return ans;
}

int main() {
    while(cin >> find_size){
        string ones;
        ones = "11";
        BigInt FindTheOne = Integer(ones);
        while((FindTheOne%check) != 0){
            ones += "1";
            FindTheOne = Integer(ones);
        }
        cout << ones.size() << endl;
    }
    return 0;
}
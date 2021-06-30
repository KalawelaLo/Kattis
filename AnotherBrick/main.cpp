#include <iostream>
using namespace std;
int main() {
    int h, w, n;
    int * lengths;
    cin >> h >> w >> n;
    lengths = new int[n];
    for(int i = 0; i < n; i++){
        cin >> lengths[i];}
    int k = 0;
    for (int i = 0; i < h; i++){
        int len = 0;
        while(len < w){
            if(k<n){
                len += lengths[k];
                k++;}
            else{
                cout << "NO\n";
                return 0;}}
        if (len > w){
            cout << "NO\n";
            return 0;
        }}
    cout << "YES\n";
    return 0;}
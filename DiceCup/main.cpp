#include <iostream>
#include <map>
#include <vector>

using namespace std; 
int main() {
    int d1, d2, tmp;
    map< int, int > fre;
    map< int, int >::iterator it, it2; 
    it2 = fre.end();
    cin >> d1 >> d2;
    for(int i = 1; i < d1+1; i++){
        for(int j = 1; j < d2+1; j++){
            it = fre.find(i+j);
            if(it!=fre.end()){
                tmp = it->second;
                tmp++;
                fre[it->first] = tmp;
                if(it2->second < it->second){
                    it2 = it;
                }
            }
            else {
                fre[i+j] = 1;
            }
        }
    }
    tmp = it2->second;
    while(it2->second == tmp){
        cout << it2->first << endl;
        it2++;
    }
    return 0;
}
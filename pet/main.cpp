#include <iostream>

using namespace std;

int main() {
    int contest[5] = {0,0,0,0,0};
    int maxIndex = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            int tmp;
            cin >> tmp;
            contest[i] += tmp;
        }
        if(contest[maxIndex]< contest[i]){
            maxIndex = i;
        }
    }
    cout << maxIndex + 1 << " "<<contest[maxIndex]<<'\n';
    return 0;
}
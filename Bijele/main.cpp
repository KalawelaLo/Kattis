#include <iostream>

using namespace std;
int main() {
    int good[6] = {1,1,2,2,2,8};
    int pieces[6];
    for(int i = 0; i < 6; i++){
        cin >> pieces[i];
        if(pieces[i]==good[i]){
            pieces[i] = 0;
        }
        else{
            pieces[i] = good[i]-pieces[i];
        }
        if(i <5) {
            cout << pieces[i] << " ";
        }
        else{
            cout << pieces[i];
        }

    }
    cout << endl;
    return 0;
}
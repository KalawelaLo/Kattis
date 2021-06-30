#include <iostream>

using namespace std;
int main(){
    int * list;
    int size;
    cin >> size;
    list = new int[size];
    for(int i = 0; i < size; i++){
        cin >> list[i];
    }
    for(int k = size -1; k + 1 > 0; k--){
        cout << list[k] << endl;
    }
}
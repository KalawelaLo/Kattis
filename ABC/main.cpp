#include <iostream>
#include <string>
using namespace std;

int main() {
    int ar[3];
    int tmp;
    string order;
    cin >> ar[0] >> ar[1] >> ar[2];
    cin >> order;
    int max = 0;
    int min = 0;
    for(int i = 1; i < 3; i++){
        if(ar[min]>ar[i]){
            min = i;
        }
    }
    for(int i = 0; i < order.size(); i++){
        if(order[i]=='A'){
            tmp = ar[min];
            ar[min]= ar[i];
            ar[i]= tmp;
            break;
        }
    }
    for(int i = 1; i < 3; i++){
        if(ar[max]<ar[i]){
            max = i;
        }
    }
    for(int i = 0; i < order.size(); i++){
        if(order[i]=='C'){
            tmp = ar[max];
            ar[max]= ar[i];
            ar[i]= tmp;
            break;
        }
    }
    for(int i = 0; i < 3; i++){
        cout << ar[i];
        if(i < 2){
            cout << " ";
        }
    }
    cout << "\n";
    return 0;
}
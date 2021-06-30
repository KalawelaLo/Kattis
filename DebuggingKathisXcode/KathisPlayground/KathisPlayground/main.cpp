#include <iostream>
#include <vector>
#include <set>
#include <stack>

using namespace std;

int main() {
    int location, input, loc1, loc2;
    int *indexTable;
    cin >> location >> input;
    indexTable = new int[location];
    for(int i = 0; i < location; i++){
        indexTable[i] = -1;
    }
    vector< int > a(9);
    for(int i = 0; i < input; i++){
        cin >> loc1 >> loc2;
        a[loc1] = loc2;
        
    }
   






    return 0;
}

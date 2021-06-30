#include <iostream>


using namespace std;
int main() {
    int size1, size2, sizeRes, cases;
    int * poly1, *poly2, *res;
    cin >> cases;
    for (int i = 0 ; i < cases; i++){
        cin >> size1;
        size1++;
        poly1 = new int[size1];
        for(int j = size1 -1 ; j > -1; j--){
            cin >> poly1[size1 - 1 - j];
        }
        cin >> size2;
        size2++;
        poly2 = new int[size2];
        for(int j = size2 - 1; j > -1; j--){
            cin >> poly2[size2 - 1 - j];
        }
        sizeRes = size1 + size2 - 1;
        res = new int[sizeRes];
        for (int j = 0; j < sizeRes; j++){
            res[j] = 0;
        }

        for(int k = 0; k < size1; k++){
            for (int l = 0; l < size2; l++){
                res[k+l] += poly1[k] * poly2[l];
            }
        }

        cout << sizeRes-1 << endl;
        for(int j = 0; j < sizeRes; j++){
            if (j==sizeRes-1) {
                cout << res[j] << endl;
            }else{
                cout << res[j] << " ";
            }
        }
        delete [] poly1;
        delete [] poly2;
        delete [] res;

    }
    return 0;
}

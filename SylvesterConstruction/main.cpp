#include <iostream>
#include <vector>
#include <list>
#include <math.h>

using namespace std;

void print(vector<int> a){
    int size = sqrt( a.size() );
    for(int i = 0; i < size; i++) {
        for(int j = 0; j< size; j++){
            if(j == size -1){
                cout << a[i + j*size] << endl;
            } else {
                cout << a[i + j*size] << " ";
            }

        }
    }
    return;
}

vector<int> KnonekerProduct(vector<int> a){
    int a_size = a.size();
    int size = sqrt( a_size);
    vector< vector<int> >res;
    vector<int>  tmp(a_size, 1);
    for(int i = 0; i < a_size; i++){
        res.push_back(tmp);
    }
    cout << "Here";
    for(int j = 0; j < size; j++){
        for(int i = 0; i < size; i++){
            res[i][j] = a[i + j*size];
        }
    }
    for(int j=0;j<a_size;j++){
            for(int i=0;i<a_size;i++){
                res[i+a_size][j] = res[i][j];
                res[i][j+a_size] = res[i][j];
                res[i + a_size][j + a_size] = -res[i][j];
            }
    }
    a.clear();
    //a.resize(a_size*a_size);

    for(int j=0;j<a_size;j++){
            for(int i=0;i<a_size;i++){
                cout << res[i][j];
            }
            cout << endl;
    }

    return a;
}



int main() {
    vector< vector<int> > the_container;
    vector<int> tmp;
    tmp.push_back(1);
    the_container.push_back(tmp);
    tmp.push_back(1); tmp.push_back(1); tmp.push_back(-1);
    the_container.push_back(tmp);
    int cases, size, tmp_size, x, y, x_max, y_max;
    tmp.clear();
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> size;
        tmp_size = 0;
        while(size > 1){
            cout << "stuck" << endl;
            size/=2;
            tmp_size++;
        }
        while(the_container.size() <= tmp_size){ // we build the vector
            int biggest = the_container.size() -1;
            print(the_container[biggest]);

            cout << "Here now";
            tmp = KnonekerProduct(the_container[biggest]);
            cout << "building" << the_container.size()<< endl;
           // the_container.push_back(tmp);
        }
       // print(the_container[tmp_size]);
    }




    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    string orginal, processed, flipped;
    int proc_num;

    cin >> proc_num >> orginal >> processed;
    if(proc_num%2 == 0){
        if(orginal == processed){
            cout << "Deletion succeeded" << endl;
        }
        else{
            cout << "Deletion failed" << endl;
        }
    }
    else{
        int stop = orginal.size();
        for(int i = 0; i < stop; i++){
            if(orginal[i]=='1'){
                flipped += "0";
            }
            else{
                flipped += "1";
            }
        }
        if(flipped == processed){
           cout << "Deletion succeeded" << endl;
        }
        else{
            cout << "Deletion failed" << endl;
        }
    }
    return 0;
}
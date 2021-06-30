#include <iostream>

using namespace std;

int main() {
    int num_of_lines;
    int * presses;
    int time = 0;
    cin >> num_of_lines;
    presses = new int[num_of_lines];
    for(int i = 0; i < num_of_lines; i++){
        cin>>presses[i];
    }
    if(num_of_lines%2 == 1){
        cout << "still running\n";
    }
    else{
        for(int i = 0; i < num_of_lines; i += 2){
            int delta = presses[i+1]-presses[i];
            time += delta;
        }
        cout << time << endl;
    }
    return 0;
}
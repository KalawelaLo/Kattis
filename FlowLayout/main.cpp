#include <iostream>

using namespace std;

int main() {
    int MAX_WIDTH, x, y, current_max_width, current_max_hieght, current_width, current_hieght, last_height;
    while(cin >> MAX_WIDTH){
        if(MAX_WIDTH == 0){
            break;
        }
        else{
            current_max_width = current_max_hieght = current_width = current_hieght = last_height = 0;
            while(cin >> x >> y){
                //does it fit into row
                if(x != -1){
                    if(current_width + x <= MAX_WIDTH){
                        current_width += x;
                        if(current_width > current_max_width){
                            current_max_width = current_width;
                        }
                        if(y > current_max_hieght){
                            current_max_hieght = y;
                        }
                        last_height = current_max_hieght;
                    } else { //if not new row
                        current_width = x;
                        current_hieght += current_max_hieght;
                        current_max_hieght = y;
                        last_height = y;
                    }
                } else {
                    current_hieght += last_height;
                    break;
                }
            }
            cout << current_max_width << " x " << current_hieght << endl;;
        }
    }
    return 0;
}

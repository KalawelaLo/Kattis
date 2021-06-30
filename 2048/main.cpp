#include <iostream>
using namespace std;

const int board_size = 4;
int board[board_size][board_size];
int row[board_size];

void print(){
   for (int i = 0 ; i < 4; i++){
        for (int j = 0 ; j < 4; j++){
            if(j == 3){
               cout << board[j][i] << "\n";
            }
            else{
            cout << board[j][i] << " ";
            }
        }
    }
}

void slide_row(){
    int combineNumber=0;
    int index_combineNumber= -1;
    //combine all combinable
    for(int i = board_size -1 ; i > -1; i--){
        if(row[i]==0){
            continue;
        }
        else{
            if(combineNumber == 0){
                combineNumber = row[i];
                index_combineNumber = i;
            }
            else{
                if(combineNumber==row[i]){
                    row[index_combineNumber] = combineNumber+combineNumber;
                    row[i] = 0;
                    combineNumber = 0;
                    
                }
                else{
                   combineNumber = row[i];
                    index_combineNumber = i;
                }
            }
        }
    }
    //slide;
   for(int i = board_size -1 ; i > -1; i--){
       if(row[i]==0){
           for(int j = i; j > -1; j--){
               if(row[j]!= 0){
                   row[i] = row[j];
                   row[j] = 0;
                   break;
               }
           }
       }
   }
}

void slide_left() {
    for(int i = 0 ; i < board_size; i++){
        for(int k = 0; k < board_size; k++){
            row[board_size-1 - k]=board[k][i];
        }
        slide_row();
       for(int k = 0; k < board_size; k++){
            board[k][i]=row[board_size-1 - k];
        }
    }
}

void slide_right() {
    for(int i = 0 ; i < board_size; i++){
        for(int k = board_size-1; k > -1; k--){
            row[k]=board[k][i];
        }
        slide_row();
       for(int k = board_size-1; k > -1; k--){ //something weird happening here
           int tmp = row[k];
            board[k][i] = tmp;
        }
    }

}

void slide_up(){
    
    for(int i = 0 ; i < board_size; i++){
        for(int k = 0; k < board_size; k++){
            row[k]=board[i][board_size -1-k];
        }
        slide_row();
       for(int k = 0; k < board_size; k++){ //something weird happening here
           int tmp = row[k];
            board[i][board_size -1-k] = tmp;
        }
    }
    
    

}
void slide_down() {
    for(int i = 0 ; i < board_size; i++){
        for(int k = board_size-1; k > -1; k--){
            row[k]=board[i][k];
        }
        slide_row();
       for(int k = board_size-1; k > -1; k--){ //something weird happening here
           int tmp = row[k];
            board[i][k] = tmp;
        }
    }
}


int main() {
    for (int i = 0 ; i < 4; i++){
        for (int j = 0 ; j < 4; j++){
            cin >> board[j][i];
        }
    }
    int theMove;
    cin >> theMove;
    switch( theMove ){
        case 0:{
            slide_left();
            break;
        }
        case 2: {
            slide_right();
            break;
        }
        case 1:{
            slide_up();
            break;
        }
        case 3: {
            slide_down();
            break;
        }
        default: {
            break;
        }
    }


    print();
    return 0;
}

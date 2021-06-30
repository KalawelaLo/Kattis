#include <iostream>
using namespace std;
int main() {
    int x, y, out;
    cin >> x >>y;
    if(x > 0){
        if(y >0){
            out = 1;}
        else{
            out = 4;}}
    else{
        if(y>0){
            out = 2;}
        else{
            out = 3;}}
    cout << out << "\n";}

#include <iostream>
using namespace std;
int main(){
    int statuesToPrint;
    int printerStatues = 0;
    int printers = 1;
    int day = 0;
    cin >> statuesToPrint;
    while(printerStatues < statuesToPrint){
        if((statuesToPrint-printerStatues)>printers){
            printers += printers;
        }
        else{
            printerStatues+=printers;
        }
        day++;
    }
    cout << day << "\n";
    return 0;
}
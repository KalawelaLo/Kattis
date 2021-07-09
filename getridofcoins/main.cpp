#include <iostream>
using namespace std;

int main() {
    int P, Number_of_Pennies_Max, Number_of_Nickels_Max, Number_of_Dimes_Max, Number_of_Quarters_Max;
    cin >> P >> Number_of_Pennies_Max >> Number_of_Nickels_Max >> Number_of_Dimes_Max >> Number_of_Quarters_Max;
    int coins_amount = -1;
    for (int i = 0; i < 25; ++i) {
        int num_pennys = min(Number_of_Pennies_Max,P)-i;
        if (num_pennys < 0) { 
            break;
        }
        int Q = P-num_pennys;
        for (int j = 0; j < 10; ++j) {
            int num_nickels = min(Number_of_Nickels_Max,Q/5)-j;
            if (num_nickels < 0) {
                break;
            }
            int R = Q-5*num_nickels;
            for (int k = 0; k < 5; ++k) {
                int num_dimes = min(Number_of_Dimes_Max,R/10)-k;
                if (num_dimes < 0) {
                    break;
                }
                int S = R-10*num_dimes;
                if (S%25==0 && S/25 <= Number_of_Quarters_Max) {
                    coins_amount = max(coins_amount, num_pennys+num_nickels+num_dimes+S/25);
                }
            }
        }
    }
    if (coins_amount == -1)
        cout << "Impossible" << endl;
    else
        cout << coins_amount << endl;
}




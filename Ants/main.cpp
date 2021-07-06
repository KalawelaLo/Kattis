#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cases, len, num_of_ants, ant_dist, early_time, max_time;
    cin >> cases;
    while(cases){
        early_time = max_time = 0;
        cin >> len >> num_of_ants;
        while(num_of_ants){
            cin >> ant_dist;
            /**
             * for each ant we are looking at whether to maximize/minimize the distance that they travel
             * We can do that on a per-Ant basis by seeing how far they need to walk to fall
             * As long as we Adjust for each ant which is why it is the max on both;
             */
            early_time = max(early_time, min(ant_dist, len - ant_dist) );
            max_time = max(max_time, max(ant_dist, len-ant_dist) );
            num_of_ants--;
        }
        cout << early_time << " " << max_time<< endl;
        cases--;
    }

    return 0;
}
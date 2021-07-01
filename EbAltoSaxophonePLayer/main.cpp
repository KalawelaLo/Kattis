#include <iostream>
#include <set>
#include <string>
#include <map>
#include <list>

using namespace std;

int main() {
    map<char , set< int >  > buttons =  {
        {'c', { 2, 3 , 4, 7, 8, 9, 10} },
        {'d', {2, 3, 4, 7, 8, 9} },
        {'e', {2, 3, 4 , 7, 8} },
        {'f', {2, 3, 4, 7} },
        {'g', {2, 3, 4} },
        {'a', {2, 3} },
        {'b', {2 } },
        {'C', {3 } },
        {'D', {1 ,2, 3, 4, 7, 8, 9} },
        {'E', {1 ,2, 3, 4, 7, 8} },
        {'F', {1 ,2, 3, 4, 7} },
        {'G', {1 ,2, 3, 4} },
        {'A', {1 ,2, 3} },
        {'B', {1, 2} }
    };
    int presses[10] = {0,0,0,0,0,0,0,0,0,0};
    int lastPress[10] = {0,0,0,0,0,0,0,0,0,0};
    set<int> notPressed;
    set<int>::iterator it, it2;
    string song;
    int songs, stop;
    cin >> songs;
    cin.get();
    for(int i = 0; i<songs; i++){
        getline(cin, song);
        stop = song.size();
        if(!song.empty()){
            for(int j = 0; j < stop; j++ ){
                it = buttons[song[j]].begin();
                notPressed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
                while(it != buttons[song[j]].end()){
                //  cout << (*it) << " ";
                    notPressed.erase((*it));
                    if(lastPress[(*it)-1] == 0){
                        presses[(*it)-1]++;
                    }
                    lastPress[(*it)-1] = 1;
                    it++;
                }
            //  cout << endl;
                it2 = notPressed.begin();
                while(it2 != notPressed.end()){
                // cout << (*it2) << " ";
                    lastPress[(*it2) - 1] = 0;
                    it2++;
                } 
                //cout << endl;    
            }
        }
       // cout << endl;
        for(int j = 0; j < 10; j++){
            if(j == 9){
                cout << presses[j] << endl;
            } else {
                cout << presses[j] << " ";
            }
            presses[j]= 0;
            lastPress[j] = 0;
        }
       // cout << endl << endl<<endl;
    }
    return 0;
}
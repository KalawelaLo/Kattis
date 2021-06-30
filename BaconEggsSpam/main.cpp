#include <iostream>
#include <map>
#include <set>
#include <sstream>

using namespace std;

int main(){
    
    int cust_count;
    while(cin >> cust_count, cust_count){
        cin.get();
        map<string, set<string> > organizedByFood;
        for(int i = 0; i < cust_count; i++){
            string read, cust_name, order;
            getline(cin, read);
            istringstream input(read);
            input >> cust_name;
            while(input >> order){
                organizedByFood[order].insert(cust_name);
            }
        }
        for(auto& item_on_menu : organizedByFood){
            cout << item_on_menu.first;
            for(auto& names : item_on_menu.second){
                cout << ' ' << names;
            }
            cout << endl;     
        }
        cout << endl;
    }
    
    return 0;
}

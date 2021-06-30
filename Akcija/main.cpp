
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int optimal_price = 0;
    int number_of_book = 0;
    int tmp;
    vector<int> books;
    cin >> number_of_book;
    for(int i = 0; i < number_of_book; i++){
        cin >> tmp;
        books.push_back(tmp);
    }
    sort(books.begin(), books.end());
    
    while(!books.empty()){
        if(books.size() >= 3){
        optimal_price += books.back();
        books.pop_back();
        optimal_price += books.back();
        books.pop_back();
        books.pop_back();
        }
        else{
            while(!books.empty()){
                optimal_price += books.back();
                books.pop_back();
            }
        }
        
        
    }

    cout << optimal_price << endl;
    return 0;
}

#include <iostream>
#include <math.h>
#include <queue>
#include <set>


using namespace std;

const int size_of_primes = 1061; //the number of primes where 1000<x<9999

bool isPrime(int w){ //
    int w_lim = sqrt(w) + 1;
    for(int i = 3; i < w_lim; i+=2){
        if(w%i==0){
            return false;
        }
    }
    return true;
}
 
bool isOneDigitDifferent(int k, int l){
    int like_ness = 4;
    if(k%10 == l%10){ //check 1s
        like_ness--;
    }
    if(k/1000 == l/1000){ //check 1000s
        like_ness--;
    }
    if((k%1000)/100 == (l%1000)/100){ //check 100s
        like_ness--;
    }
    if((k%100)/10 == (l%100)/10){ //check 10s
        like_ness--;
    }
    if(like_ness == 1){
        return true;
    }
    return false;
}

int main(){

    //get all valid options
    int primes[1061]; 
    int j = 0;
    for(int i = 1001; i < 9999; i+=2){
        if(isPrime(i)){
            primes[j]=i;
            j++;}}
    int cases, prime1, prime2;
    cin >> cases;
    while(cases--){
        cin >> prime1 >> prime2; //we do a BFS
        queue< pair<int, int> > examine;
        set <pair<int, int> > visited;
        pair<int ,int> start(prime1, 0); //pairs keep track of weight
        examine.push(start);
        visited.insert(start);
        pair<int, int> end;
        while(!examine.empty()){
            pair<int, int> tmp = examine.front();
            examine.pop();
            //cout << tmp.first << " " << tmp.second << endl;
            for(int i = 0; i < size_of_primes; i++){
                if(isOneDigitDifferent(primes[i], tmp.first)){
                   pair<int, int> to_check(primes[i], tmp.second+1);
                   if(visited.find(to_check) == visited.end()){
                        visited.insert(to_check);
                        examine.push(to_check);}}}
            if(tmp.first == prime2){
                end = tmp;
                break;}}
        if(examine.empty()){
            cout << "Impossible" << endl;
        } else {
            cout << end.second << endl;}}}


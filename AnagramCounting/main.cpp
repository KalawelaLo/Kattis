#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
using namespace std;

typedef unsigned int unsignedINT;
const unsignedINT LENGTH_OF_UNSIGNEDINT = 10000000;

void manyPartFactorial(unsignedINT n, vector<unsignedINT>& v){
    for(unsignedINT i=2;i<=n;i++){ //factoriol loop, skip to 2 1*2=2
        unsignedINT carry = 0; //this is
        for(unsignedINT& x: v){ //iterates through the sections held in vector v
            x *= i;
            x += carry;
            carry = x/LENGTH_OF_UNSIGNEDINT;
            x %= LENGTH_OF_UNSIGNEDINT;}
        if(carry){ //we need another section if there is a section
            v.push_back(carry);}}}
void manyPartDivision(unsignedINT n, vector<unsignedINT>& v){
    for(unsignedINT i=2;i<=n;i++){ //iterates through sections
        unsignedINT carry = 0;
        for(auto it=v.rbegin();it!=v.rend();it++){ 
            *it += carry * LENGTH_OF_UNSIGNEDINT;
            carry = *it % i;
            *it /= i;}}}
int main(){
    string line;
    while(cin>>line){
        vector<unsignedINT> v {1};
        manyPartFactorial(line.size(), v);
        map<char, unsignedINT> m;
        for(char c: line) m[c]++;
        for(auto x: m) manyPartDivision(x.second, v);
        bool zerosGone = false;
        for(auto it=v.rbegin();it!=v.rend();it++){
            if(!zerosGone){
                if(*it){
                    zerosGone=true;
                    cout<<*it;}}
            else cout<<setfill('0') << setw(7)<<*it;}
        cout<<endl;}
    return 0;}

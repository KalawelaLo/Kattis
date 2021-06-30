#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
/* https://open.kattis.com/problems/aboveaverage  ./hello < in.txt > out.txt */
int main() {
    int number_of_lines;
    int number_of_items_on_line;
    int grade;
    int total_grades;
    int total_above_average;
    float percent;
    float average;
    vector<int> grades;
    cin >> number_of_lines;
    cout << setprecision(3) << fixed;
    for(int i = 0; i < number_of_lines; i++){
        total_grades = total_above_average = 0;
        cin >> number_of_items_on_line;
        for(int j = 0; j < number_of_items_on_line; j++){
            cin >> grade;
            total_grades += grade;
            grades.push_back(grade);}
        average = ((float) total_grades) / ((float) grades.size());
        for(int i = 0; i < grades.size(); i++){
            if(grades[i] > average){
                total_above_average++;}}
        cout << ((float) total_above_average)/((float)grades.size())*100 << "%\n";
        grades.clear();}
    return 0;}

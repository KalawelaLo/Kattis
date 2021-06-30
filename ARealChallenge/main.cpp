#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    setprecision(11);
    double area;
    cin >> area;
    area = sqrt(area);
    area *= 4;
    cout << fixed << area << endl;
    return 0;
}

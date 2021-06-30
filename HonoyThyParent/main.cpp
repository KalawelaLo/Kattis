#include <iostream>
#include <string> 
using namespace std;

int main() {
    string a, b, res;
    cin >> a  >> b;
    if(a[a.size()-1] == 'e'){
        res = a+'x'+b;
    } else if(a[a.size()-1] == 'a' || a[a.size()-1] == 'i'|| a[a.size()-1] == 'o'||a[a.size()-1] == 'u'){
        a[a.size()-1] = 'e';
        res = a + 'x' + b;
    }
    else if(a[a.size()-1] == 'x' && a[a.size() - 2] == 'e'){
        res = a + b;
    }
    else{
        res = a+"ex"+b;
    }
    cout << res << endl;
    return 0;
}
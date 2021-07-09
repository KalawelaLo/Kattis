#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> input (2 * n);
    for (int i = 0; i < (2 * n) ; i++){
        cin >> input[i];
    }
       
    vector<long long> t(n);
    partial_sum(input.begin(), input.begin() + n, t.begin());
    vector<long long> shifted(2 * n + 1); 
    shifted[2 * n] = 0;
    for (int i = 2 * n - 2; i >= 0; i -= 2){
        shifted[i] = input[i] + shifted[i + 2];
    }
    long long res = 1LL<<62;
    for (int i = 1; i <= n; i++){
        res = min(res, (t[i - 1] + shifted[2 * i]) * (input[0] + input[i]));
    }
    cout << res << endl;
}


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int factors = 0;
    int factor = 2;
    while (factor*factor <= n)
    {
        if (n % factor == 0)
        {
            n /= factor;
            factors++;
        }
        else
        {
            factor++;
        }
    }
    cout << factors + 1 << endl;
}

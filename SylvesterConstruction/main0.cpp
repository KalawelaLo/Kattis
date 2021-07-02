#include <iostream>
using namespace std;

int val(int x, int y, unsigned long long n)
{
    int v = 1; //value is 1 or -1
    while (!(n%2==1)) //we will scale n up to the size
    {
        n >>= 1; //double size
        if (x < n)
        {
            if (y >= n) y -= n;
        }
        else
        {
            x -= n;
            if (y >= n)
            {
                y -= n;
                v = -v;
            }
        }
    }
    return v;
}

void test_case()
{
    unsigned long long n;
    int x, y, w, h;
    cin >> n >> x >>y >>w>>h;
    for (int _y = y; _y < y + h; _y++)
    {
        if (w) cout << val(x, _y, n);
        for (int _x = x + 1; _x < x + w; _x++)
        {
            cout << " " <<val(_x, _y, n);
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--) test_case();
    return 0;
}
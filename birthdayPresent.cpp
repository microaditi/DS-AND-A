#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, f, d;
        cin >> a >> f >> d;
        if (a > f && d > 0)
        {
            cout << "NO \n";
        }
        else if (f > a && d < 0)
        {
            cout << "NO \n";
        }
        else if (a == f)
        {
            cout << "YES \n";
        }
        else if (d == 0)
        {
            cout << "NO \n";
        }
        else if (a > f && (a - f) % d == 0)
        {
            cout << "YES \n";
        }
        else if (a < f && (f - a) % d == 0)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
    return 0;
}

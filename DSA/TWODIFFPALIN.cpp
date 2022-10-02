#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void karma()
{
    ll x, y;
    cin >> x >> y;
    // if any 1st element is one
    if (x == 1 && y % 2 == 0 && y > 4)
    {
        cout << "NO" << endl;
    }
    // if any 2nd element is one
    else if (y == 1 && x % 2 == 0 && x > 4)
    {
        cout << "NO" << endl;
    }
    // both elements are even
    else if (x % 2 == 0 && y % 2 == 0)
    {
        cout << "YES" << endl;
    }
    // one  even and one is odd
    else if (x % 2 == 0 && y % 2 != 0)
    {
        if (x >= 2 && y >= 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (x % 2 != 0 && y % 2 == 0)
    {
        if (x >= 3 && y >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if ((x == 1 && y== 2) || (x == 2 && y== 1))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0); // Input and output clearance
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        karma();
    }
    return 0;
}

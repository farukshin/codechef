// https://www.codechef.com/COOK136B/problems/RGBCONST
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int r, g, b;
    cin >> r >> g >> b;
    if (g + r < b)
    {
        cout << "-1\n";
        return;
    }

    for (int i = 0; i < r; i++)
        cout << 'R';
    for (int i = 0; i < g; i++)
        cout << 'G';
    for (int i = 0; i < b; i++)
        cout << 'B';
    cout << "\n";
    for (int i = 0; i < g; i++)
    {
        cout << 1 << " " << r + 1 + i << "\n";
    }
    for (int i = 0; i < r - 1; i++)
    {
        cout << r + 1 << " " << i + 2 << "\n";
    }
    for (int i = 0; i < b; i++)
    {
        cout << i + 1 << " " << r + g + 1 + i << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

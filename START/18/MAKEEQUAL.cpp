// https://www.codechef.com/START18B/problems/MAKEEQUAL
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int mn, mx;
    cin >> mn;
    mx = mn;
    for (int i = 2; i <= n; i++)
    {
        int cur;
        cin >> cur;
        mn = min(mn, cur);
        mx = max(mx, cur);
    }
    cout << mx - mn << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

// https://www.codechef.com/SNCK1B21/problems/LARGESTLADDU
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(pow(2, n));
    int mn = 1e9 + 5, mx = -1;
    for (auto &d : v)
        cin >> d, mn = min(mn, d), mx = max(mx, d);
    cout << (mx - mn > 1 ? "NO" : "YES") << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

// https://www.codechef.com/COOK136B/problems/MEDMIN
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    ll ans = LLONG_MAX;
    cin >> n;
    vector<ll> v(n);
    for (auto &d : v)
        cin >> d;
    sort(begin(v), end(v));
    int mid = n / 2;
    ll cur;
    for (int i = 0; i < n; i++)
    {
        if (i < mid)
            cur = abs(v[i] - v[mid]);
        else if (i >= mid)
            cur = abs(v[i] - v[mid - 1]);
        ans = min(ans, cur);
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

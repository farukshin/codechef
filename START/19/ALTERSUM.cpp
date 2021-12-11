// https://www.codechef.com/START19B/problems/ALTERSUM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n + 1), sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i], sum[i] = sum[i - 1] + v[i] * (i % 2 == 1 ? 1 : -1);

    ll ans = sum[n];
    for (int i = 1; i <= n; i++)
    {
        ll curans = sum[i - 1] + (-1) * (sum[n] - sum[i]) + v[i] * (n % 2 == 1 ? 1 : -1);
        ans = max(ans, curans);
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

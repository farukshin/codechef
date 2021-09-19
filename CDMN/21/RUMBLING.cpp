// https://www.codechef.com/CDMN21B/problems/RUMBLING
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long x, y;
    string s;
    cin >> n >> s >> x >> y;
    map<char, long long> mpE =
    {
        {'E', 0},
        {'N', min(x, y * 3)},
        {'S', min(y, x * 3)},
        {'W', min(x * 2, y * 2)}
    };
    map<char, long long> mpW =
    {
        {'E', min(x * 2, y * 2)},
        {'N', min(y, x * 3)},
        {'S', min(x, y * 3)},
        {'W', 0}
    };
    assert(n == s.size());
    vector<long long> e(n + 5, 0), w(n + 5, 0);
    for(int i = 1; i <= n; i++)
        e[i] = e[i - 1] + mpE[s[i - 1]],  w[i] = w[i - 1] + mpW[s[i - 1]];

    long long ans = min(w[n], e[n]);
    for(int i = 1; i <= n; i++)
        ans = min(ans, e[i - 1] + w[n] - w[i - 1]);
    cout << ans << "\n";
}


int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

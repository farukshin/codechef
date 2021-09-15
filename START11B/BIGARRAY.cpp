// https://www.codechef.com/START11B/problems/BIGARRAY
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    ll s;
    cin >> n >> s;
    ll sum = 1ll * (1 + n) * n / 2;
    ll diff = sum - s;
    if(diff >= 1 && diff <= n) cout << diff << "\n";
    else cout << -1 << "\n";

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

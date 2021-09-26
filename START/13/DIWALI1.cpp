// https://www.codechef.com/START13B/problems/DIWALI1
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    ll p, a, b, c, x, y;
    cin >> p >> a >> b >> c >> x >> y;
    ll ans = 0;
    ll Anar1 = b + x * a;
    ll Chakri1 = c + y * a;
    if(Anar1 <= Chakri1)
    {
        ans = max(ans, p / Anar1);
        p -= ans * Anar1, ans += p / Chakri1;
    }
    else
    {
        ans = max(ans, p / Chakri1);
        p -= ans * Chakri1, ans += p / Anar1;
    }

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

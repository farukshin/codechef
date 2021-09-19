// https://www.codechef.com/COOK131C/problems/CHFGCD
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void solve()
{
    ll a, b, ans = 0;
    cin >> a >> b;
    if(a == 1) a++, ans += 1;
    if(b == 1) b++, ans += 1;

    if(gcd(a, b) != 1)
        cout << ans << "\n";
    else if(gcd(a + 1, b) != 1 || gcd(a, b + 1) != 1)
        cout << ans + 1 << "\n";
    else
        cout << ans + 2 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

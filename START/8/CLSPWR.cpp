// https://www.codechef.com/START8B/problems/CLSPWR
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll n, ans = 0;

ll binpow(ll n, ll pw)
{
    ll res = 1;
    while(pw)
    {
        if(pw & 1) res *= n;
        n *= n;
        pw >>= 1;
    }
    return res;
}

void updAns(ll curAns)
{
    if(abs(n - curAns) < abs(n - ans))
        ans = curAns;
    else if(abs(n - curAns) == abs(n - ans) && curAns < ans)
        ans = curAns;
}

void solve()
{
    cin >> n;

    for(ll pw = 60; pw >= 2; pw--)
    {
        ld r = pow(n, 1.0 / pw);
        ll r1 = floor(r);
        ll r2 = r1 + 1;
        if(r2 < 2) break;
        updAns(binpow(r1, pw));
        updAns(binpow(r2, pw));
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    //solve();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
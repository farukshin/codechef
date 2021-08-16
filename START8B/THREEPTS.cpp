// https://www.codechef.com/START8B/problems/THREEPTS
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool lon ( ll a, ll b)
{
    if(a == 0 || b == 0) return true;
    return (a > 0 && b > 0 || a < 0 && b < 0);
}

void solve()
{
    ll a, b, c, d, e, f, ans = 0;
    cin >> a >> b >> c >> d >> e >> f;
    ll dx1 = a - c, dy1 = b - d, dx2 = c - e, dy2 = d - f;
    ll s1 = abs(dx1) * abs(dy1), s2 = abs(dx2) * abs(dy2);
    cout << ((s1 == 0 || s2 == 0) && lon(dx1, dx2) && lon(dy1, dy2) ? "Yes" : "No") << "\n";
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

// https://www.codechef.com/START13B/problems/VACCINQ
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int n, x, y, p;
    cin >> n >> p >> x >> y;
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        //if(i==p-1) cur=1;
        if(i <= (p - 1))
            ans += (cur ? y : x);
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

// https://www.codechef.com/START12C/problems/MAXPOINT
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a[3], c[3], ans = 0, MXT = 240;
    for(int i = 0; i < 3; i++) cin >> a[i];
    for(int i = 0; i < 3; i++) cin >> c[i];

    for(int cnt1 = 0; cnt1 < 21; cnt1++)
    {
        if(a[0] * cnt1 > MXT) continue;
        ans = max(ans, c[0] * cnt1);

        for(int cnt2 = 0; cnt2 < 21; cnt2++)
        {
            if(a[0]*cnt1 + a[1]*cnt2 > MXT) continue;
            ans = max(ans, c[0] * cnt1 + c[1] * cnt2);

            for(int cnt3 = 0; cnt3 < 21; cnt3++)
            {
                if(a[0]*cnt1 + a[1]*cnt2 + a[2]*cnt3 > MXT) continue;
                ans = max(ans, c[0] * cnt1 + c[1] * cnt2 + c[2] * cnt3);
            }
        }
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
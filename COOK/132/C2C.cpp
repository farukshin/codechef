// todo
// https://www.codechef.com/COOK132B/problems/C2C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
ll ans = 0;

vector<ll> v(1e6, 0);
vector<vector<ll>> dp(1e6, vector<ll>(4, 0));


void init()
{
    ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
            dp[i][j] = 0;
}

void solve()
{
    cin >> n;
    init();
    ll cur;
    cin >> cur;
    dp[0][0] = max(cur, ll(0));
    dp[0][1] = dp[0][0];
    dp[0][2] = 0;

    for(int i = 1; i < n; i++)
    {
        cin >> v[i];
        dp[i][0] = max(dp[i - 1][0] + v[i], ll(0));
        if(dp[i][0] > 0 )
        {
            dp[i][1] = dp[i - 1][1];
            dp[i][2] = dp[i - 1][2];

            if(v[i] >= dp[i][1]) dp[i][2] = dp[i][1], dp[i][1] = v[i];
            else if(v[i] > dp[i][1]) dp[i][1] = v[i];
        }
        else dp[i][1] = dp[i][2] = 0;
    }

    for(int i = 0; i < n; i++)
        ans = max(ans, dp[i][0] - dp[i][1] - dp[i][2]);
    cout << ans << "\n";
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

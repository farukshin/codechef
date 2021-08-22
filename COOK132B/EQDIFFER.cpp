// https://www.codechef.com/COOK132B/problems/EQDIFFER
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    if(mp.size() == 1 || n == 2 && mp.size() == 2)
    {
        cout << "0\n";
        return;
    }

    // cout<< mp.size()-1 <<"\n";
    // return;

    ll ans = 2;
    for(auto d : mp)
        ans = max(ans, d.second);
    cout << n - ans << "\n";
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

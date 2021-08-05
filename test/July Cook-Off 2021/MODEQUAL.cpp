// https://www.codechef.com/COOK131C/problems/MODEQUAL
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    int mn = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        mn = min(mn, v[i]);
    }

    int ans0 = n - (mp.count(0) ? mp[0] : 0);
    if(mn == 0)
    {
        cout << ans0 << "\n";
        return;
    }

    int ansMin = 0;
    bool success = true;

    for(auto d : mp)
    {
        auto num = d.first;
        auto cnt = d.second;
        if(num == mn)
            continue;
        if( (mn <= num / 2 && num % 2 == 1) || (mn < num / 2 && num % 2 == 0) )
            ansMin += cnt;
        else
        {
            success = false;
            break;
        }
    }

    if(success)
        cout << min(ans0, ansMin) << "\n";
    else
        cout << ans0 << "\n";
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

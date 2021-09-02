// https://www.codechef.com/CDMN21B/problems/SUBMEDIA
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n), ans;
    for(int i = 0; i < n; i++) cin >> v[i].first, v[i].second = i;
    sort(begin(v), end(v), greater<pair<int, int>>());
    for(int i = 0; i < k; i++)
        ans.push_back({v[i].second, v[i].first});

    cout << ans[k / 2].second << "\n";
    sort(begin(ans), end(ans));
    for(auto d : ans) cout << d.second << " ";
    cout << "\n";
}


int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

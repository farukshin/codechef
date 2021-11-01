// https://www.codechef.com/SNCKQL21/problems/MAXDISTKT
#include <bits/stdc++.h> // todo
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    vector<int> ans(n, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(begin(v), end(v));

    int cur = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i].first > cur)
        {
            ans[v[i].second] = cur;
            cur++;
        }
        else ans[v[i].second] = cur;
    }
    for(auto d : ans)
        cout << d << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

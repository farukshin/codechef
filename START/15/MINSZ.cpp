// https://www.codechef.com/START15B/problems/MINSZ //todo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<int> v;
    ll a = 0, b = 0;
    int pos = 0;
    while(n)
    {
        a += 1 << pos;
        if(!(n & 1)) v.push_back(pos);
        n = n >> 1;
        pos++;
    }
    cout << 1 + int(v.size()) << "\n" << a << " ";
    for(auto p : v)
    {
        ll cur = ll(1) << p;
        cout << cur << " ";
    }
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

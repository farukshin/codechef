// https://www.codechef.com/COOK133B/problems/FAKESWAP
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s, t;
    cin >> n >> s >> t;

    if(s == t)
    {
        cout << "YES\n";
        return;
    }

    int cnt1 = 0, cnt0 = 0;
    for(auto ch : t)
        if(ch == '0') cnt0++;
        else if(ch == '1') cnt1++;

    if(cnt0 == 0 || cnt1 == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

// https://www.codechef.com/START13B/problems/MAGDOORS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    int ans = (s[0] == '1' ? 0 : 1);
    for(int i = 1; i < s.size(); i++)
        if(s[i - 1] != s[i]) ans++;
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

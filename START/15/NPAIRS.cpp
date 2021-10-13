// https://www.codechef.com/START15B/problems/NPAIRS
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
        for(int j = i + 1; j < min(int(s.size()), i + 10); j++)
            if(j - i == abs(int(s[i] - s[j])))
                ans++;
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

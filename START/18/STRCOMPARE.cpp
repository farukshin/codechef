// https://www.codechef.com/START18B/submit/STRCOMPARE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    if (s1 == s2)
    {
        cout << "0"
             << "\n";
        return;
    }

    int ans = 0, cur = 0;
    bool fl = false;
    for (int i = n - 1; i >= 0; i--)
        if (s1[i] < s2[i])
            ans++, fl = true;
        else if (s1[i] == s2[i] && fl)
            ans++;
        else if (s1[i] > s2[i] && fl)
            fl = false;
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

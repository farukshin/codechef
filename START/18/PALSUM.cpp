// https://www.codechef.com/START18B/problems/PALSUM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

set<int> st;

bool check(int num)
{
    string s = "";
    while (num)
    {
        if (num & 1)
            s = s + '1';
        else
            s = s + '0';
        num = num >> 1;
    }
    string s2 = s;
    reverse(begin(s2), end(s2));
    return s == s2;
}

void precalc()
{
    for (int i = 1; i < 1010; i++)
        if (check(i))
            st.insert(i);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    while (n > 0)
    {
        auto it = st.lower_bound(n);
        if (*it != n)
            --it;
        ans.push_back(*it);
        n -= *it;
    }
    cout << ans.size() << "\n";
    for (auto d : ans)
        cout << d << " ";
    cout << "\n";
}

int main()
{
    precalc();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

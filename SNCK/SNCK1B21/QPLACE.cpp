// https://www.codechef.com/SNCK1B21/problems/QPLACE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n, string(n, '.'));
    for (int i = 0; i < n - 3; i++)
        v[i][i] = 'Q';
    v[n - 2][n - 2] = 'Q';
    for (auto s : v)
        cout << s << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

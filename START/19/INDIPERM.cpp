// https://www.codechef.com/START19B/problems/INDIPERM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
        cout << i << " ";
    cout << "1\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

// https://www.codechef.com/SNCKQL21/problems/LUCKYNUM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == 7 || b == 7 || c == 7 ? "YES" : "NO") << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

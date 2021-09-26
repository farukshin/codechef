// https://www.codechef.com/START12C/problems/GOODWEAT
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int ans = 0;
    for(int i = 0; i < 7; i++)
    {
        int a;
        cin >> a;
        if(a) ans++;
    }
    cout << (ans >= 4 ? "YES" : "NO") << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
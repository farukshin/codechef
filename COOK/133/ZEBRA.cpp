// https://www.codechef.com/COOK133B/problems/ZEBRA
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int kk = 0;
    // for(int i=1;i<s.size();i++)
    // 	if(s[i]!=s[i-1]) kk++;

    int f0 = -1, f1 = -1;
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == '0' && f0 == -1) f0 = i + 1;
        else if(s[i] == '1' && f1 == -1) f1 = i + 1;

        if(i != n - 1 && s[i] != s[i + 1]) kk++;
    }

    bool success = kk >= k;

    if(!success)
        cout << -1 << "\n";
    else if(k % 2 == 0)
        cout << (s[0] == '0' ? f0 : f1 ) << "\n";
    else if(k % 2 == 1)
        cout << (s[0] == '1' ? f0 : f1) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

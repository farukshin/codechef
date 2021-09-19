// https://www.codechef.com/CDMN21B/problems/THREEQ
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int cur;
    map<int, int> mp;
    for(int i = 0; i < 3; i++)
    {
        cin >> cur;
        mp[cur]++;
    }
    for(int i = 0; i < 3; i++)
    {
        cin >> cur;
        mp[cur]--;
    }
    cout << (mp[0] == 0 && mp[1] == 0 ? "Pass" : "Fail") << "\n";
}


int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

// https://www.codechef.com/COOK132B/problems/DIFSTR
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> v(n);
    map<int, int> mp;
    for(auto &d : v)
    {
        cin >> d;
        mp[d]++;
        if(d > 1 || d < -1) cnt++;
    }

    if(cnt >= 2)
    {
        cout << "0\n";
        return;
    }

    vector<int> vv;
    for(auto d : mp)
        if(d.second > 1)
        {
            vv.push_back(d.first);
            vv.push_back(d.first);
        }
        else if(d.second == 1) vv.push_back(d.first);

    bool fl = true;
    for(int i = 1; i < vv.size() && fl; i++)
        for(int j = 0; j < i && fl; j++)
            if(mp.count(vv[i]*vv[j]) == 0) fl = false;
    cout << (fl ? '1' : '0') << "\n";
    return;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

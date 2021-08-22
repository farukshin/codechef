// https://www.codechef.com/COOK132B/problems/DIFSTR
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    string s, ans = string(n, '0');
    set<string> st;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        st.insert(s);
    }

    while(true)
    {
        int pos = rand() % n;
        ans[pos] = (ans[pos] == '1' ? '0' : '1');
        if(st.count(ans) == 0)
        {
            cout << ans << "\n";
            return;
        }
    }

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

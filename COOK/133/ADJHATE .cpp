// https://www.codechef.com/COOK133B/problems/ADJHATE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    queue<int> q0, q1;
    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if(cur % 2) q1.push(cur), cnt1++;
        else q0.push(cur), cnt0++;
    }
    if(cnt1 == 0 || cnt0 == 0)
    {
        cout << -1 << "\n";
        return;
    }

    if(q0.size() > q1.size()) swap(q0, q1);

    while(true)
    {
        int k0 = q0.size(), k1 = q1.size();

        if(k0 == 1 && k1 > 1)
        {
            cout << q1.front() << " ";
            q1.pop();
        }
        else
        {
            cout << q1.front() << " " << q0.front() << " ";
            q1.pop();
            q0.pop();
        }

        if(q0.empty() && q1.empty()) break;
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

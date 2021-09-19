// https://www.codechef.com/CDMN21B/problems/NODRUGS
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    vector<int> v(n);
    for(auto &d : v) cin >> d;
    if(n == 1)
    {
        cout << "Yes\n";
        return;
    }
    auto it = end(v);
    auto mx = max_element(begin(v), --it);
    if(*mx < v[n - 1])
    {
        cout << "Yes\n";
        return;
    }
    if(k <= 0)
    {
        cout << "No\n";
        return;
    }
    int need = *mx + 1 - v[n - 1];
    int kk = ceil(1.0 * need / k);
    cout << (kk < l ? "Yes" : "No") << "\n";
}


int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

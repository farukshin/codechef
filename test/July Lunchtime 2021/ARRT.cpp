// https://www.codechef.com/LTIME98B/problems/ARRT
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    ll a[n], b[n], c[n];

    for(int i = 0; i < n; i++) c[i] = LLONG_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= n;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
        b[i] %= n;
    }


    for(int i = 0; i < n; i++)
    {
        bool load = false;
        bool start = true;
        for(int j = 0; j < n; j++)
        {
            ll cur = (b[(i + j) % n] + a[j]) % n;

            if(start)
            {
                if(c[j] > cur)
                    c[j] = cur, load = true, start = false;
                else if(c[j] == cur)
                    continue;
                else if(c[j] < cur)
                    break;
            }
            else if(load)
                c[j] = cur;
            else
                break;
        }
    }

    for(int i = 0; i < n; i++)
        cout << c[i] << " ";
    cout << "\n";
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

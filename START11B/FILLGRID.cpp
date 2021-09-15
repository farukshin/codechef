// https://www.codechef.com/START11B/problems/FILLGRID
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    if(n == 2)
    {
        cout << "-1 -1\n-1 -1\n";
        return;
    }

    vector<vector<int>> v(n, vector<int>(n, 1));
    for(int i = 0; i < n; i++)
        v[i][i] = -1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << v[i][j] << " ";
        cout << "\n";
    }

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

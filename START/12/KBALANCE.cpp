// https://www.codechef.com/START12C/problems/KBALANCE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
string s;

// bool have1(int i)
// {
// 	bool res = false;
// 	if(i-k>=0 && s[i-k] == '1' || i+k<n && s[i+k] == '1')
// 		res = true;
// 	return res;
// }

char get(int i)
{
    char res = '#';
    if(i >= 0 && i < n) res = s[i];
    return res;
}

bool is1(int i)
{
    return i >= 0 && i < n && s[i] == '1';
}

bool is0(int i)
{
    return i >= 0 && i < n && s[i] == '0';
}

void solve()
{
    cin >> n >> k >> s;
    int ans = 0, cnt1 = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1') cnt1++;

        if(s[i] == '1' && get(i + k) == '0' && get(i + 2 * k) == '1' && !is1(i - k) && !is1(i + 3 * k))
        {
            s[i + k] = '1', ans++;
            continue;
        }

        if(s[i] == '1' && !(is1(i - k) || is1(i + k)))
            s[i] = '0', ans++;
    }

    cout << min(ans, cnt1) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
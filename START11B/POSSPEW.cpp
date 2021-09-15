// https://www.codechef.com/START11B/problems/POSSPEW
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, k;

ll getCntByLen0(int len) // todo
{
    if(len == 0) return 0;
    ll res = 0;
    int toFull = len / 2 - (len % 2 == 0 ? 1 : 0);
    toFull = min(toFull, k);
    res += 1ll * (1 + toFull) * toFull * 2 / 2;
    res += 1ll * len * (k - toFull) ;
    return res;
}

void solve()
{
    scanf("%d %d", &n, &k);

    ll ans = 0;
    int cnt1 = 0;
    int cnt0InStart = 0;
    bool isFirstSector = true;
    int curLen0 = 0;

    for(int i = 0; i < n; i++)
    {
        int cur;
        scanf("%d", &cur);
        ans += cur;

        if(!isFirstSector && cur && curLen0)
        {
            ans += getCntByLen0(curLen0), curLen0 = 0;
        }
        else if(!isFirstSector && cur == 0)
            curLen0++;
        else if(isFirstSector && cur == 0)
            cnt0InStart++;
        else if(isFirstSector && cur)
            isFirstSector = false;

        if(cur) cnt1++;
    }
    if(curLen0 + cnt0InStart > 0)
        ans += getCntByLen0(curLen0 + cnt0InStart);
    ans += 1ll * cnt1 * (k - 1);

    printf("%lld\n", 1ll * 2 * ans);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();
    return 0;
}

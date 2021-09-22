// https://www.codechef.com/START12C/problems/SPATH3
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n,m,x,y;
	scanf("%lld %lld %lld %lld", &n, &m, &x, &y);
	ll diag = min(x*2, y);
	ll mn = min(n,m);
	ll ans = (mn-1) * diag;
	
	ll x2 = min(x*2, y*2);
	ll need = abs(m-n);
	ans+= (need/2)* x2 + (need%2 ? x : 0);
	printf("%lld\n", ans);
}

int main()
{
	int t; scanf("%d", &t);	while(t--)
	solve();
	return 0;
}
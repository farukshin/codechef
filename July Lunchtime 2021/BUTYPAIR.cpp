// https://www.codechef.com/LTIME98B/problems/BUTYPAIR
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n, cur;
	cin>>n;

	vector<int> cnt(1000005, 0);
	vector<int> v(n);
	ll  cntt = 0;

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		cnt[v[i]]++;
		cntt++;
	}

	ll ans=0;
	for(int i=0;i<n;i++)
		ans+= (cntt-cnt[v[i]]);

	cout<<ans<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t; cin>>t; while(t--){solve();}
    return 0;
}

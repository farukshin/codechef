// https://www.codechef.com/COOK131C/problems/CHFPLN
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	ll n, cur;
	cin>>n;
	map<int,int> mp;

	for(int i=0;i<n;i++)
	{
		cin>>cur;
		mp[cur]++;
	}

	ll ans=0;
	for(auto d:mp)
		ans+= min(d.second, d.first-1);
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

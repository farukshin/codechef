// https://www.codechef.com/COOK131C/problems/CHFGCD
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int v[105];

void solve()
{
	int n;
	cin>>n;
	int x = INT_MIN;
	for(int i=0;i<n;i++)
		{cin>>v[i]; x = max(x, v[i]);}

	int ans=(x^v[0]);
	for(int i=1;i<n;i++)
		ans |= (x^v[i]);

	cout<<x<<" "<<ans<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t; cin>>t; while(t--){solve();}
    return 0;
}

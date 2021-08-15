// https://www.codechef.com/START8B/problems/PENALTY
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	vector<int> v(10), ans(2, 0);
	for(int i=0;i<10;i++)
	{
		cin>>v[i];
		ans[i%2]+=v[i];
	}
	cout<< (ans[0]>ans[1] ? 1 : (ans[0]==ans[1] ? 0 : 2))<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t; cin>>t; while(t--){solve();}
    return 0;
}

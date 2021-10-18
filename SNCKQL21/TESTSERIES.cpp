// https://www.codechef.com/SNCKQL21/problems/TESTSERIES
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	vector<int> v(3,0);
	for(int i=0;i<5;i++)
	{
		int cur;
		cin>>cur;
		v[cur]++;
	}
	if(v[1]>v[2]) cout<<"INDIA\n";
	else if(v[2]>v[1]) cout<<"ENGLAND\n";
	else  cout<<"DRAW\n";
}

int main()
{
	int t;cin>>t;while(t--)
	solve();
    return 0;
}

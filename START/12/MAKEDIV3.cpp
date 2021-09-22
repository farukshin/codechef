// https://www.codechef.com/START12C/problems/MAKEDIV3
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
	int n;
	cin>>n;
	if(n==1) cout<<3<<"\n";
	else if(n==2) cout<<39<<"\n";
	else
		cout<<'3'<<string(n-2,'0')<<"9\n";
	
}

int main()
{
	int t; cin>>t; while(t--)
	solve();
	return 0;
}
// https://www.codechef.com/START8B/problems/JAVELIN
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n,m,x;
	cin>>n>>m>>x;
	priority_queue<pair<int,int>> q;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		q.push({(a),i+1});
	}

	set<int> st;
	while(!q.empty() && (q.top().first) >= m)
	{
		st.insert(q.top().second);
		q.pop();
	}
	while(!q.empty() && st.size() < x)
	{
		st.insert(q.top().second);
		q.pop();
	}

	cout<<st.size()<<" ";
	for(auto d:st)
		cout<< d <<" ";
	cout<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t; cin>>t; while(t--){solve();}
    return 0;
}

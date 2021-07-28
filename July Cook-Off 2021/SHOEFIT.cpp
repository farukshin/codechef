// https://www.codechef.com/COOK131C/problems/SHOEFIT
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<< ((a+b+c)!=0 && (a+b+c)!=3 ? 1 : 0) <<"\n";

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t; cin>>t; while(t--){solve();}
    return 0;
}

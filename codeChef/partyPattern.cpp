#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	int n;
	cin>>n;
	vector<int> a(n);

	for(int i=0;i<n;i++)
		cin>>a[i];

	int ans = 1;
	for(int i=0;i<n;i++){
		int s = i+1,e=a[s-1],c=1;
		while(e!=s){
			c++;
			e=a[e-1];
		}

		// cout<<c<<endl;
		ans = (c*ans)/__gcd(c,ans);
	}

	cout<<"Ans : "<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
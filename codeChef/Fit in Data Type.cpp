#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	 int n,k;
	 cin>>n>>k;
	 n++;
	 cout<<k%n<<endl;
}

int main() {
	fastio();
	tc {
		solve();
	}
}
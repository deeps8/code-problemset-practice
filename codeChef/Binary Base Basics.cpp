#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	int n,k,c=0;
	cin>>n>>k;
	string s;
	cin>>s;

	for (int i = 0,j=n-1; i < j; ++i,j--){
		if(s[i]!=s[j]){
			c++;
		}
	}

	if(c<k && k-c <=n){
		if((k-c)%2==1){
			if(n%2==1)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
	else if(k-c>n)
		cout<<"NO\n";
	else if(c==k)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

int main() {
	fastio();
	tc {
		solve();
	}
}
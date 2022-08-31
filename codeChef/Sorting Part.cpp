#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	int n,x;
	cin>>n;
	vector<int> a(n); 

	for(int i=0;i<n;i++){
		cin>>x;
		a[i] = x;
	}

	vector<int> pre(n-1),post(n-1);
	
	pre[0] = a[0];
	for(int i=1;i<n-1;i++){
		pre[i] = max(pre[i-1],a[i]);
	}

	post[0] = a[n-1];
	for(int i=n-2,j=1;i>0;i--,j++){
		post[j] = min(post[j-1],a[i]);
	}

	for(int i=0;i<n-1;i++){
		if(pre[i]<=post[i]){
			cout<<"NO"<<endl;
			return;
		}
	}

	cout<<"YES"<<endl;
	return;
}

int main() {
	fastio();
	tc {
		solve();
	}
}
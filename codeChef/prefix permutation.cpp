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

	vector<int> a(k);
	for(int i=0;i<k;i++){
		cin>>a[i];
	}

	sort(a.begin(),a.end());

	int s = 0;
	for(int i=0;i<k;i++){
		for(int j=a[i];j>s;j--){
			cout<<j<<" ";
		}
		s = a[i];
	}
	cout<<endl;
}

int main() {
	fastio();
	tc {
		solve();
	}
}
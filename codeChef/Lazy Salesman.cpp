#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	int n,w,e=0;
	cin>>n>>w;
	
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];


	sort(a.begin(),a.end());

	for(int i=n-1;i>=0;i--){
		if(w<=0)
			break;
		e++;
		w-=a[i];
	}

	cout<<n-e<<endl;
}

int main() {
	fastio();
	tc {
		solve();
	}
}
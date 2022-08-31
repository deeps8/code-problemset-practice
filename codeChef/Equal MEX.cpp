#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

// int findMEX(vector<int> a,int n){
// 	vector<bool> p(n);

// 	for(int i=0;i<n;i++){
// 		// if()
// 	}

// }

void solve () {
	
	int n;
	cin>>n;
	n*=2;
	vector<int> a(n);
	vector<bool> p(n+1,false);
	map<int,int> mp;

	for(int i=0;i<n;i++){
		cin>>a[i];
		p[a[i]] = true;
		mp[a[i]]++;
	}

	int Global_MEX = 0;

	for(int i=0;i<=n;i++){
		if(!p[i]){
			Global_MEX = i;
			break;
		}
	}
	cout<<Global_MEX<<endl;
	if(Global_MEX == 0){
		cout<<"YES"<<endl;
		return;
	}

	for(auto m:mp){
		if(m.first < Global_MEX && m.second < 2){
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
#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

int solve(vector<int> &a,vector<int> &b){
	int n = a.size();
	int res=0;
	for(int i=0;i<n;i++){
		if(a[i]==0)
			res += b[i];		
	}
	int best = res,temp = res;
	for(int i=0;i<n;i++){
		if(a[i])
			res += b[i];
		else
			res -= b[i];

		best = max(best,res);
	}
	res = temp;
	for(int i=n-1;i>=0;i--){
		if(a[i])
			res += b[i];
		else
			res -= b[i];

		best = max(best,res);
	}

	return best;
}

int main() {
	fastio();
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	
	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=0;i<n;i++)
		cin>>b[i];

	int res = solve(a,b);
	cout<<res;
}
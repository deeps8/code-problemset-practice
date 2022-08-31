#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

int solve (vector<int> &a){

	if(a.empty())
		return 0;

	int n = a.size();

	vector<int> leftMax(n),rightMax(n);
	int m=0;
	// leftmax
	for (int i = 0; i < n; ++i){
		m = max(m,a[i]);
		leftMax[i] = m;
	}
	m=0;
	// rightmax
	for (int i = n-1; i >=0; --i){
		m = max(m,a[i]);
		rightMax[i] = m;
	}

	int res = 0;
	m=0;
	for (int i = 0; i < n; ++i){
		m = min(leftMax[i],rightMax[i]) - a[i];
		if(m)
			res+=m;
	}

	return res;

	
}

int main() {
	fastio();
	int n;
	cin>>n;
	vector<int> a(n);

	for(int i=0;i<n;i++)
		cin>>a[i];

	cout<<solve(a)<<endl;
}
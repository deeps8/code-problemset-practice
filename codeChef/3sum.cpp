#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]


void solve () {
	int n;
	cin>>n;
	vector<int> a(n);

	for(int i=0;i<n;i++)
		cin>>a[i];

	vector<vector<int>> res={};
	sort(a.begin(),a.end());
	int l,r=n-1,target;
	
	for(int i=0;i<n;i++){
		if(i>0 && a[i]==a[i-1])
			continue;

		l = i+1;
		r = n-1;
		while(l<r){
			target = a[l] + a[r] + a[i];
			if(target < 0)
				l++;
			else if(target > 0)
				r--;
			else{
				res.push_back({a[i],a[l],a[r]});
				l++;
				while(a[l]==a[l-1] && l<r)
					l++;
			}

		}
	}

	for(int i=0;i<res.size();i++){
    	cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<endl;
    }

}

int main() {
	fastio();
	// tc {
		solve();
	// }
}
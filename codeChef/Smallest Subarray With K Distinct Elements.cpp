#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

vector<int> solve (vector<int> &a,int n,int k) {
	unordered_map<int,int> mp;
	int start=-1,end=-1,minArrSize=INT_MAX,currentSize=0;

	int st=0,ed=0;
	for(ed=0;ed<n;ed++){
		mp[a[ed]]++;

		while(mp.size()>=k){
			if(mp.size()==k){
				currentSize = ed-st+1;
				if(currentSize < minArrSize){
					minArrSize = currentSize;
					start = st;
					end = ed;
				}
			}
			mp[a[st]]--;
			if(mp[a[st]]<=0)
				mp.erase(a[st]);
			st++;
		}
	}

	if(minArrSize==INT_MAX)
		return {-1};

	return {start,end};
}

int main() {
	fastio();
	int n,k;
	cin>>n>>k;

	vector<int> a(n);

	for(int i=0;i<n;i++)
		cin>>a[i];
	
	vector<int> res;
	res = solve(a,n,k);

	for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";

}
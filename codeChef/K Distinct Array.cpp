#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	 int n,k,count = 0;
	 cin>>n>>k;
	 vector<int> a;

	 k = k-n;  // cuz we will have N minimum good subarray with length 1

	 while(k>=count){
	 	a.push_back(count+1);
	 	k-= count;
	 	count++;
	 }

	 while(a.size()<=n){
	 	a.push_back(count-k);
	 }

	 for(int i=0;i<n;i++){
	 	cout<<a[i]<<" ";
	 }

	 cout<<endl;

}

int main() {
	fastio();
	tc {
		solve();
	}
}
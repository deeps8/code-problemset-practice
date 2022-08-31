#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

int solve (vector<int> &a,int n) {
	vector<int> b = a;
	sort(b.begin(),b.end());
	int res = 0,c=0,i=0;

	while(b!=a){
		for(i=0;i<n-1;i++){
			if(a[i+1]<a[i]){
				c++;	
			}
			else{
				if(c){
					// cout<<i-c<<" "<<i<<endl;
					sort(a.begin()+i-c,a.begin()+i+1);
					res++;
				}
				c=0;
			}
		}
		if(c){
			// cout<<i-c<<" "<<i<<endl;
			sort(a.begin()+i-c,a.end());
			res++;
		}
		c=0;
	}

	return res;
}

int main() {
	fastio();
	// tc {
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		int res = solve(a,n);

		cout<<res<<endl;
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";

	// }
}
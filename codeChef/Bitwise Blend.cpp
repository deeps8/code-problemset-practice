#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

/*
	Odd XOR Even -> Odd
	Even XOR Even -> Even
	Odd XOR Odd -> Even
*/

vector<long long> OddEve(vector<long long> &a,int oe,int n){

		for(int i=0;i<n;i++){
			if(a[i]%2 && i!=oe)
				return {a[i],i};
		}	

	return {-1,-1};

}

void solve () {
	long long n,i,eo=0,k=0;
	cin>>n;
	vector<long long> a(n),temp,res;
	for (i = 0; i < n; ++i)
		cin>>a[i];

	// finding the min pattern
	for(int i=0;i<n;i++){
	 	if(a[i]%2==i%2)
	 		eo++;
	}

	if(eo==n || eo==0){
	 	cout<<0<<endl;
	 	return;
	}
	else
		k = min(eo,n-eo);

	if(k==eo){
		// pattern : OEOEOE
		for (int i = 0; i < n; ++i){
			if(i%2==a[i]%2){
				temp = OddEve(a,i,n);
				if(temp[0]==-1){
					cout<<-1<<endl;
		 			return;
				}
				a[i] = a[i]^temp[0];
				res.insert(res.end(),{i+1,temp[1]+1});
			}
		}
	}
	else{
		// pattern : EOEOEO
		for (int i = 0; i < n; ++i){
			if(i%2!=a[i]%2){
				temp = OddEve(a,i,n);
				if(temp[0]==-1){
					cout<<-1<<endl;
		 			return;
				}
				a[i] = a[i]^temp[0];
				res.insert(res.end(),{i+1,temp[1]+1});
			}
		}	
	}

	 cout<<k<<endl;
	 for(i=0;i<res.size();i+=2 ){
	 	cout<<res[i]<<" "<<res[i+1]<<endl;
	 }
	 // cout<<endl<<endl;

	 // for (i = 0; i < n; ++i)
	 // {
	 // 	cout<<a[i]<<" ";
	 // }
	 // cout<<endl;

}

int main() {
	fastio();
	tc {
		solve();
	}
}
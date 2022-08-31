// HashMap<Integer, Boolean> mp = new HashMap<>();

#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve (ll n,map<ll,ll> &f,ll q,vector<vector<ll>> &queries){

	// calculating frequency sum.
	map<ll,ll> sumf;
	sumf[0]=0;
	for(auto i:f){
		sumf[i.second] += i.first*i.second; 
	}

	long long sum = 0,maxfq=sumf.end()->first-1;
	vector<long long> csum;

	// cummulative sum
	for(auto i:sumf){
		sum += i.second;
		csum.push_back(sum);
		// cout<<sum<<" ";
	}
	
	long long sum1,sum2;	
	for(ll i=0;i<q;i++){
		sum1=sum2=0;
		if(queries[i][0]-1 > maxfq)
			sum1 = 	csum[maxfq];
		else
			sum1 = csum[queries[i][0]-1];

		if(queries[i][1] > maxfq)
			sum2 = csum[maxfq];
		else
			sum2 = csum[queries[i][1]];

		cout<<sum2-sum1<<endl;
	}

}

int main() {
	fastio();
	ll n,q,a;
	cin>>n;

	map<ll,ll> f;
	for(ll i=0;i<n;i++){
		cin>>a;
		f[a]++;
	}

	cin>>q;

	ll x,y;
	vector<vector<ll>> queries(q);

	for(ll i=0;i<q;i++){
		cin>>x>>y;
		queries[i].push_back(x);
		queries[i].push_back(y);
	}

	solve(n,f,q,queries);
}
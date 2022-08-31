#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc ll t; cin>>t; while(t--)
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007


bool checkValue(vector<ll> &a){
	ll m = a[0];
	for (ll i = 1; i < a.size(); ++i){
		if(m!=a[i]){
			return false;
		}
	}

	return true;
}

vector<int> getPosi(map<ll,vector<int>> &mp){
	int maxlen = 0,value,temp;
	vector<int> res;
	for(auto m:mp){
		temp = m.second.size();
		if( temp > maxlen && temp > 1){
			res = {};
			value = m.first;
			res = m.second;
			maxlen = temp;
		}
	}
	res.insert(res.begin(),value);
	if(maxlen>1)
		return res;

	res = {};
	res = mp.begin()->second;
	res.insert(res.begin(),mp.begin()->first);
	return res;
	
}

void solve(){
	ll n,i;
	cin>>n;
	vector<ll> a(n);
	map<ll,vector<int>> mp;
	vector<int> temp;

	for (i = 0; i < n; ++i)
		cin>>a[i];

	ll minSum,minIdx=0,res=0;


	while(n>1){
		if(checkValue(a)){
			break;
		}

		for(ll j = 0; j < n-1; ++j){
			mp[a[j]+a[j+1]].push_back(j);
		}

		temp = getPosi(mp);
		a[temp[1]] = temp[0];
		a.erase(a.begin()+temp[1]+1);
		res++;
		n--;
		// cout<<temp[1]<<" ";
		
		temp.clear();
		mp.clear();
		
	}
	// cout<<endl<<endl;
	cout<<res<<endl;
	// cout<<"[ ";
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<a[i]<<"  ";
	// }
	// cout<<" ]"<<endl;
}

int main(){
	fastio();
	tc {
		solve();
	}
	return 0;
}

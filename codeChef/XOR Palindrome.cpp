#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	ll n;
	cin>>n;
	char s;

	map<char,ll> freq;

	for(ll i=0;i<n;i++){
		cin>>s;
		freq[s]++;
	}

	
	if(n%2==0){
		if(freq['0']==freq['1'])
			cout<<"YES"<<endl;
		else if(freq['0']%2==0 && freq['1']%2==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
	
}

int main() {
	fastio();
	tc {
		solve();
	}
}
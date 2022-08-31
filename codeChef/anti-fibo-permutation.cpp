#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	int n,c=1;
	cin>>n;

	while(c<=n){
		for(int j=n;j>=1;){
			if(c==j){
				cout<<1<<" ";
				c++;
			}
			else{
				if(j!=1)
					cout<<j<<" ";
				j--;
			}
		}
		cout<<endl;
	}

}

int main() {
	fastio();
	tc {
		solve();
	}
}
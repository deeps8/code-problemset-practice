#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve (vector<int> &a,int n) {
	bool flag = false;
	int i=0,j=1;
	while(i<n){
		if(a[i]==j && flag){
			break;
		}
		if(a[i]==j){
			i++;
			j++;
		}
		else{
			i++;
			flag = true;
		}
	}

	for(int k=j-1,l=i;k<l;k++,l--)
		swap(a[k],a[l]);	 


}

int main() {
	fastio();
	tc {
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		solve(a,n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
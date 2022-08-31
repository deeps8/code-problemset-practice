#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

int solve (int a) {

	vector<int> t(a);
	for(int i=1;i<=a;i++)
		t[i-1] = i;

	int i=0;
	while(t.size()>1){
		t.pop_back();
		t.insert(t.begin(),t.back());
		t.pop_back();
		// for(int j=0;j<t.size();j++){
		// 	cout<<t[j]<<" ";
		// }
		// cout<<endl;
	}
	
	// return t[0];
	cout<<"Using Loop : "<<t[0]<<endl;

	float cl = (float) log2(a);
	int fl = (int) cl;

	if(cl-fl==0){
		return 1;
	}
	else{
		fl++;
		return pow(2,fl) - a + 1; 
	}

}

int main() {
	fastio();
	int a;
	cin>>a;
	int res = solve(a);
	cout<<"Using log : "<<res<<endl;	
}
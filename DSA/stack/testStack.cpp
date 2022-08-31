#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007


int main() {
	stack<int> sc;
	sc.push(4);
	sc.push(6);
	sc.push(1);
	sc.push(3);

	cout<<sc.top()<<endl;
	sc.pop();
	cout<<sc.top()<<endl;
}
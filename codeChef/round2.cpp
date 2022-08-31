// 1 7 9 13 11 15

#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

int main() {
	int n;
	cin>>n;

	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];

	// 2nd largest number
	sort(a.begin(),a.end());

	int maxVal = INT_MIN;

	for(int i=0;i<n;i++)
		if(maxVal<a[i])
			maxVal = a[i];

}
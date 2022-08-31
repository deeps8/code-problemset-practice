#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

bool check(int x,vector<vector<int>> &a,int b,int c){

	int burgers = 0,burgers_eaten,speed=x,n=a.size();
	float time = 0;

	for(int i=0;i<n;i++){
		burgers_eaten = a[i][0] - burgers;
		time += (float) burgers_eaten/speed;
		speed += a[i][1];
		burgers = a[i][0];
	}

	if(b-burgers > 0){
		time += (float) (b-burgers)/speed;
	}

	return time <= c;
}

int solve (vector<vector<int>> &a,int b,int c) {

	// sort the array cuz we will eat burger from lower to high
	sort(a.begin(),a.end());

	// binary search algo to calculate the X value in efficient way
	int res = 0;

	int low=0,high=b,mid;

	while(low<=high){
		mid = (high+low)/2;

		if(check(mid,a,b,c))
			high = mid-1;
		else
			low = mid + 1;

	}

	// cout<<high<<" "<<low<<endl;
	return low;
	 
}

int main() {
	fastio();
	int n,b,c,t;
	cin>>n;
	vector<vector<int>> a(n);

	for(int i=0;i<n;i++){
		cin>>t;
		a[i].push_back(t);
		cin>>t;
		a[i].push_back(t);
	}

	cin>>b>>c;

	int res = solve(a,b,c);
	cout<<res;
}
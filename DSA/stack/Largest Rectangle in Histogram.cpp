#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

// brute force method
/*
int maxArea(vector<int> &h,int n,int a){
	int maxNum = 0,c=0;
	for(int i=0;i<n;i++){
		if(h[i]<a){
			maxNum = max(maxNum,c);
			c=0;		
		}
		else
			c++;
	}

	maxNum = max(maxNum,c);

	return maxNum;

}

int solve(vector<int> &h) {
	int n = h.size();

	vector<int> temp = h;
	sort(temp.begin(),temp.end());

	int same = temp[0],res = 0;

	for(int i=1;i<n;i++){
		if(temp[i]!=same){
			int area = maxArea(h,n,temp[i])*temp[i];
			res = max(res,area);
			same = temp[i];
		}
	}


	return max(res,temp[0]*n);

}
*/
// 2,1,5,6,2,3

// stack implementation
int solve(vector<int> &h){
	int n = h.size(),prevIndx=0,prevValue=0,res=0;
	stack<pair<int,int>> stk;

	for(int i=0;i<n;i++){
		prevIndx = i;
		while(!stk.empty() && h[i]<stk.top().second){
			prevIndx = stk.top().first;
			prevValue = stk.top().second;
			stk.pop();
			res = max(res,(i-prevIndx)*prevValue);
			// cout<<prevIndx<<" "<<prevValue<<" : "<<res<<endl;
		}
		stk.push({prevIndx,h[i]});
	}

	while(!stk.empty()){
		res = max(res,(n-stk.top().first)*stk.top().second);
		stk.pop();
	}

	return res;
}


int main() {
	fastio();
	int n;
	cin>>n;
	vector<int> h(n);
	for(int i=0;i<n;i++)
		cin>>h[i];

	cout<<solve(h)<<endl;
}
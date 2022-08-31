#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void setValue(vector<vector<int>> &a,int s,int i,int j) {

	if(a[i+1][j]!=0)
		a[i+1][j] = s;
	if(a[i+1][j+1]!=0)
		a[i+1][j+1] = s;
	if(a[i][j+1]!=0)
		a[i][j+1] = s;
	if(a[i][j-1]!=0)
		a[i][j-1]=s;
	if(a[i-1][j]!=0)
		a[i-1][j]=s;
	if(a[i-1][j-1]!=0)
		a[i-1][j-1]=s;
	if(a[i+1][j-1]!=0)
		a[i+1][j-1]=s;
	if(a[i-1][j+1]!=0)
		a[i-1][j+1]=s;
}

int main() {
	fastio();
	int n,m,val;
	cin>>n>>m;
	
	vector<vector<int>> a(n+2);

	for(int i=1;i<=n;i++){
		vector<int> b(m+2);
		for(int j=1;j<=m;j++){
				cin>>b[j];
		}
		a[i] = b;
	}

	// solution

	// padding the Matrix 
	vector<int> b(m+2);
	a[0] = b;
	a[n+1] = b;
	
	int num=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]!=0){
				if(a[i][j]==1){
					num++;
					a[i][j]=num;
					setValue(a,num,i,j);
				}
				else{
					setValue(a,a[i][j],i,j);
					// num = a[i][j];
				}
			}
		}
	}

	// cout<<num-1<<endl;
	set<int> s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]>1)
				s.insert(a[i][j]);
		}
	}

	cout<<s.size()<<endl;
}
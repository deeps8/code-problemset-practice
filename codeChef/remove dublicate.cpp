#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve(vector<int>& a) {
        int n = a.size(),i;
        for(i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                a.erase(a.begin()+i+1);
                i--;
                n--;
                continue;
            }
        }

        cout<<n<<endl;

        for(i=0;i<a.size();i++){
        	cout<<a[i]<<" ";
        }
    }

int main() {
	fastio();
	// tc {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
		solve(a);
	// }
}
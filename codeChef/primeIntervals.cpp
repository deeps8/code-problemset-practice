#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void Prime (int s,int e) {
	bool flag;

	while (s <= e) {
	    flag = true;

	    if (s == 0 || s == 1) {
	      flag = false;
	    }
	 
	    for (int i = 2; i*i <= s; ++i) {
	      if (s % i == 0) {
	        flag = false;
	        break;
	      }
	    }
	        
	    if (flag)
	      cout << s << " ";

	    ++s;
  }
}

int main() {
	int n1,n2;
	cin>>n1>>n2;
	Prime(n1+1,n2-1);
	return 0;
}
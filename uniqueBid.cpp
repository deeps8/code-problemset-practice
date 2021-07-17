#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
  	cin >> t;
  	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> a(n + 1);
	    
		for (int i = 1; i <= n; ++i) {
		    int b;
		    cin >> b;
		    if (a[b] == 0) {
		    	a[b] = i;
		    } else {
		        a[b] = -1;
		    }
	    }
	    
	    int ans = -1;
	    
		for (int i = 1; i <= n; ++i)
	    	if (a[i] >= 1) {
	        	ans = a[i];
	        	break;
	      	}
	    cout << ans << '\n';
  }
  return 0;
}

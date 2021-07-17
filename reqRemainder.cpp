#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
    while(t--) {
        long long x, y, n; 
        cin>>x>>y>>n;
        
        long long r = n % x;
        if(r == y) {
            cout<<n;
        } else {
            if(r > y) cout<<((n / x) * x + y);
            else cout<<(((n / x) - 1) * x + y);
        }
    	
    	cout<<endl;
    }
	
	return 0;
} 

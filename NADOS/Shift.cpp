#include <bits/stdc++.h>
using namespace std;
string shift(string s, int a[], int n){
    for(int i=n-2; i>=0; i--){
        a[i] += a[i + 1];
        a[i] %= 26;
    }
    
    for(int i=0; i<n; i++) {
        s[i] = (((s[i] - 'a') + a[i]) % 26 + 'a');
    }
    
    return s;
}
int main(){
    string s;
	cin>>s;
	int n = s.length(),inc=0;
	int a[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];
		
    cout<<shift(s, a, n);
    return 0;
}

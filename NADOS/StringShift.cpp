#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	int n = s.length(),inc=0;
	int a[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	for(int i=0;i<n;i++){
		inc = accumulate(a+i,a+n,0);
		int t = 'z'-s[i];
		if(inc>t)
			s[i] = 'a'+inc%t - 1;
		else
			s[i] += inc;
			
//		cout<<s[i]<<" ----- "<<inc<<endl;
	}
	
	cout<<s;
	
	return 0;
}

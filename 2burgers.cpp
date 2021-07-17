// https://codeforces.com/problemset/problem/1207/A
#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int b,p,f,h,c;
		cin>>b>>p>>f>>h>>c;
		
		int br = b/2;
		if(br==0)
			cout<<0<<endl;
		else if(br >= p+f)
			cout<<h*p+c*f<<endl;	
		else if(c>=h && br>=f)
			cout<<c*f + h*(br-f)<<endl;
		else if(c>=h && br<f)
			cout<<c*br<<endl;
		else if(h>c && br>=p)
			cout<<h*p + c*(br-p)<<endl;
		else if(h>c && br<p)
			cout<<h*br<<endl;
	}
	return 0;
}

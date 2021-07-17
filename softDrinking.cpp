#include<iostream>
using namespace std;

int main(){
	
	long long n,k,l,c,d,p,nl,np,min;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	
	l = k*l;
	l = l/nl;
	
	d = c*d;
	
	p = p/np;
	
	if(p<=l && p<=d)
		min = p;
	else if(l<=p && l<=d)
		min = l;
	else
		min = d;
		
		cout<<min/n;			
	
	return 0;
}

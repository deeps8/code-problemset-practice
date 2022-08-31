#include<iostream>
using namespace std;

int revNum(int n){
	int res = 0;
	while(n>0){
		res = res*10 + n%10;
		n = n/10;
	}
	
	return res;
}

int main(){
	int a,b,revA,revB;
	
	cin>>a>>b;
	revA = revNum(a);
		revB = revNum(b);
	cout<<revNum(revB+revA);
	
	return 0;
}

// https://codeforces.com/problemset/problem/1452/A
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int x,y,d;
		cin>>x>>y;
		if(x==y)
			cout<<x+y<<endl;
		else{
			d = abs(x-y)-1;
			cout<<(x+y)+d<<endl;
		}	
	}
	
	return 0;
}

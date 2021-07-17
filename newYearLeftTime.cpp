#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int h,m,res=0;
		cin>>h>>m;
		
		h++;
		res = res + 60*(24-h) + (60-m);
		
		cout<<res<<endl;
		
	}
	
	return 0;
}

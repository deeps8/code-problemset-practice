#include<iostream>
using namespace std;

int main(){
	
	int a[4];
	cin>>a[3]>>a[2]>>a[1]>>a[0];
	
	long long sum=0;
	string s;
	cin>>s;
	
	for(int i=0;i<s.length();i++){
		sum = sum + a[52-s[i]];
	}
	
	cout<<sum;
	
	return 0;
}

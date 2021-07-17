#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int k2,k3,k5,k6;
	long long sum=0;
	cin>>k2>>k3>>k5>>k6;
	
	int m = min(k2,min(k5,k6));
	sum += m*256;
	
	k2 = k2-m;
	
	sum += min(k2,k3)*32;
	
	cout<<sum;
	
	return 0;
}

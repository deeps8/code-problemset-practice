#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int n,sum=0;
	cin>>n;
	
	string s1,s2;
	cin>>s1>>s2;
	
	for(int i=0;i<n;i++){
		if(abs(s1[i]-s2[i]) > 5 )
			sum = sum + (10 - abs(s1[i]-s2[i]));
		else
			sum = sum + abs(s1[i]-s2[i]);	
	}
	
	cout<<sum;
	
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n,max,sum=0;
	cin>>n;
	max=0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(max<a[i])
			max=a[i];
	}
	
	for(int i=0;i<n;i++){
		sum += (max-a[i]);
	}
	
	cout<<sum;	
	return 0;
}


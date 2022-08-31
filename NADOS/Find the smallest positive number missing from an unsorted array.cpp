#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,minValue=INT_MAX;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>0 && a[i] < minValue)
			minValue = a[i];
	}
	
	if(minValue !=1){
		cout<<1;
		return 0;
	}
	
	for(int i=0;i<n;i++){
		if(a[i] > 0 && a[i]-minValue == 1){
			minValue = a[i];
		}
	}
	
	cout<<minValue+1;
	
	return 0;
}

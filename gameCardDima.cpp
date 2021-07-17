#include<iostream>
using namespace std;

int main(){
	
	int n,s=0,d=0,t=1;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0,j=n-1;i<=j;){
			if(a[i]<=a[j] && t==1){
				s = s + a[j];
				j--;
			}
			else if(a[i]>=a[j] && t==1){
				s = s + a[i];
				i++;
			}
			else if(a[i]>=a[j] && t==-1){
				d = d + a[i];
				i++;
			}
			else if(a[i]<=a[j] && t==-1){
				d = d + a[j];
				j--;
			}
			
			t = -t;
					
	}
	cout<<s<<" "<<d;
	return 0;
}

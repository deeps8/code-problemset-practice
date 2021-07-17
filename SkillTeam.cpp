// https://codeforces.com/problemset/problem/1249/A
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,temp;
		cin>>n;
		int a[n],c=1;
		
		for(int i=0;i<n;i++)
			cin>>a[i];
			
		sort(a,a+n);
		temp = a[0];
		
		for(int i=0,j=1;j<n;j++){
			if(a[j]-temp>1){
				temp = a[j];
				i = j;
				c++;
			}
		}
		
//		cout<<"Output : ";
		if(c==n)
			cout<<1<<endl;
		else 
			cout<<2<<endl;	
		
	}
	return 0;
}

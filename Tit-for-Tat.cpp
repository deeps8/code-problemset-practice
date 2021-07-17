// https://codeforces.com/problemset/problem/1516/A
#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		
		for(int i=0;i<n;i++)
			cin>>a[i];
			
//		cout<<"n : "<<n<<endl;	 	
		for(int i=0;i<n-1;i++){
			if(k==0)
				break;
			else if(a[i] >= k){
				a[i] -= k;
				a[n-1] += k;
				break;  
			}else{
				a[n-1] += a[i];
				k -= a[i];
				a[i] = 0;
			}
		}	
		
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}

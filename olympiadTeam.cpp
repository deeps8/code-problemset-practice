#include<iostream>
using namespace std;
//3 3 1 2 2 1 3 1 1 1 3 2 2 2 3 3 1 3 2 3 2 2 1 3 3 2 3 1 2 2 2 1 3 2 1 1 3 3 1 1 1 3 1 2 1 1 3 3 3 2 3 2 3 2 2 2 1 1 1 2
int main(){
	
	int n,a[3]={1,2,3},min=3;
	cin>>n;
	int f[n];
	
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(a[x-1]<=n){
			f[a[x-1]-1] = i;
			a[x-1] += 3; 
		}
			
	}
	
	min = a[0];
	
	for(int i=1;i<=3;i++){
//		cout<<(a[i-1]-i)/i<<" ";
		if(min > (a[i-1]-i)/i){
			min = (a[i-1]-i)/i;
		}

	}
	
	
	cout<<min<<endl;
	
	for(int i=0;i<min*3;i++){
		cout<<f[i]<<" ";
		if((i+1)%3==0 && i!=0)
			cout<<endl;
	}
	
	
	
}

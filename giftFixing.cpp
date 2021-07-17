#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		
		int n;long long sum=0;
		cin>>n;
		int a[n],b[n],amin=0,bmin=0;
		
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[amin]>a[i])
				amin = i;
		}
		
		for(int i=0;i<n;i++){
			cin>>b[i];
			if(b[bmin]>b[i])
				bmin = i;
		}
		
		for(int i=0;i<n;i++){
			sum = sum + (a[i]-a[amin]) + (b[i]-b[bmin]);
			if(i!=amin && i!=bmin){
				if((a[i]-a[amin]) <= (b[i]-b[bmin])){
					sum = sum - (a[i]-a[amin]); 
				}
				else if((a[i]-a[amin]) > (b[i]-b[bmin])){
					sum = sum - (b[i]-b[bmin]);
				}
			}
			
		}
		
//		cout<<"amin : "<<amin<<" bmin : "<<bmin<<endl;
		cout<<sum<<endl;
	}
	
	return 0;
}

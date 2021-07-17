#include<iostream>
using namespace std;

int main(){
	
	int n,m,a[4];
	cin>>n;
	n++;
	m=n;
	for(int i=0;i<4;i++){
		a[i] = m % 10;
		m = m/10;
	}

	while(1){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(a[j]>=9){
					a[i] = 10 - a[i];
					a[i+1]++;
				}
				else if(a[i]==a[j] && i==j){
					a[i]++;
				}
					
			}
			
		}
		if(a[0]==a[1] || a[0]==a[2] || a[0]==a[3] || a[1]==a[2] || a[1]==a[2] || a[2]==a[3]){
			break;	
		}
	}

	for(int i=0;i<4;i++)
		cout<<a[i]<<" ";
		
	return 0;
}

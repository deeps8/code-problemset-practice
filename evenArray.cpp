#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,a,odd=0,eve=0,good=0;
		
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>a;
			
			if(i%2 != a%2 && a%2 == 1){
				odd++;
			}
			else if(i%2 != a%2 && a%2 == 0){
				eve++;
			}
			else{
				good++;
			}
		}
		
		if(odd == eve || good==n)
			cout<<odd<<endl;
		else
			cout<<-1<<endl;	
	}
	
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n;
		cin>>n;
		int a,b,an;
		cin>>a>>b;
		for(int i=2;i<n;i++){
			cin>>an;
		}
		
		if(a+b>an)
			cout<<"-1"<<endl;
		else
			cout<<"1 2 "<<n<<endl;	
		
	}
	
	return 0;
}

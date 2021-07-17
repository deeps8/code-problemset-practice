#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	long long n,q;
	
	while(t-->0){
//		first logic (mine)
//		cin>>n;
//		if(n>2){
//			q = n/2;
//			if(n%2==0)
//				cout<<--q<<endl;
//			else
//				cout<<q<<endl;	
//		}else{
//			cout<<0<<endl;
//		}

//     second logic
		cin>>n;
		cout<<(n-1)/2<<endl;	
	}
	
	return 0;
}

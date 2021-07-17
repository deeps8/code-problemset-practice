#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n;
		long long a,sum=0;
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>a;
			sum+=a;
		}
		cout<<(sum+n-1)/n<<endl;
	}
	
	return 0;
}

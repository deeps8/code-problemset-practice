#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n;
		string s,t,sub;
		cin>>n>>s;
		
//		cout<<"Output"<<" " ;
		t = s.substr(0,n);
//		cout<<t<<" ";
		for(int i=1;i<n;i++){
			
			sub = s.substr(i,n);
//			cout<<sub<<" ";
			for(int j=0;j<n;j++){
				if(t[j] == '0' && sub[j]=='0')
					t[j] = '0';
				else
					t[j] = '1';		
			}
			
//			cout<<"[ t : "<<t<<" ] ";
		
		}
		
		
		cout<<t<<endl;
	}
	
	return 0;
}

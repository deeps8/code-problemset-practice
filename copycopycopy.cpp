#include<iostream>
#include<set>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,a;
		set<int> s;
		
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			s.insert(a);
		}
		
		if(s.size() < n)
			cout<<s.size()<<endl;
		else
			cout<<n;	
	}
	
	return 0;
}

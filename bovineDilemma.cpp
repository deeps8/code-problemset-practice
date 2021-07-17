#include<iostream>
#include<set>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		set<int> s;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++)
				s.insert(a[j]-a[i]);
		}		
		
		cout<<s.size()<<endl;
	}
	
	return 0;
}

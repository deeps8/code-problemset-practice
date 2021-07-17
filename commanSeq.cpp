#include<iostream>
#include<set>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	

	while(t-->0){
		int n,m,el,ans=-1;
		cin>>n>>m;
		
		set<int> s;
		
		while(n-->0){
			cin>>el;
			s.insert(el);
		}
		
		while(m-->0){
			cin>>el;
			if(s.count(el))
				ans = el;
		}
		
		if(ans == -1)
			cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			cout<<1<<" "<<ans<<endl;
		}	
		
	}
	
	return 0;
}

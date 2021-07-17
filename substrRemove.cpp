#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		string s;
		int c=0,x=0;
		cin>>s;
		int a[s.length()/2];
		
		for(int i=0;i<s.length();i++){
//			cout<<s[i]<<" ";
			if(s[i]=='1')
				x++;
			else if(s[i]=='0' && x>0  ){
				a[c]=x;
				c++;
				x=0;
			}	
		}
		
		a[c]=x;		
		sort(a,a+c+1);
		x=0;
		for(int i=c;i>=0;)
    	{
    		x += a[i];
    		i = i-2;
    	}
		
		cout<<x<<endl;
		
	}
	
	return 0;
}

#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

// pepcoder cares peep coode infinity inifii

int main(){
	int n,m=0;
	cin>>n;
	string s[n];
	string str = "";
	for(int i=0;i<n;i++){
		cin>>s[i];
		str.append(s[i]);
	}
	
	cout<<str<<endl<<endl;
	set<char> ms;
	for(int i=0;str[i];i++){
		
		if(ms.find(str[i]) == ms.end()){
			cout<<str[i];
			ms.insert(str[i]);
		}
		else{
			int size = ms.size();
			cout<<"--"<<size<<"\n";
			m = max(m,size);
			ms.clear();
			i--;
		}
	}
	
	cout<<endl<<endl<<m;
	
	return 0;
}

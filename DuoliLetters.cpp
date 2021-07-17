#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
	
	set<char> f;
	string c;
  	getline (cin, c);

	for(int i=1;i<c.length();i=i+3){
		if(c[i]!='{' && c[i]!='}' && c[i]!=',' && c[i]!=' ')
				f.insert(c[i]);
	}
		
	cout<<f.size();
	
	return 0;
}

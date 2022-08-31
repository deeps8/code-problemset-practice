#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int f,mxl=1,start=0;
	for(int i=0;i<s.length();i++){
		for(int j=i;j<s.length();j++){
			f=1;
			for(int k=0;k<(j-i+1)/2;k++){
				if(s[i+k] != s[j-k])
					f=0;
			}
			
			if(f && (j-i+1)>mxl){
				start = i;
				mxl = j-i+1;
			}
		}
	}
	
	if(mxl>1)
		cout<<"Subtring : "<<s.substr(start,mxl)<<endl<<"len : "<<mxl<<" Start : "<<start;
	else
		cout<<"No Subtring"<<endl;
	return 0;
}

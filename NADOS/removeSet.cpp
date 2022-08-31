#include<iostream>
#include<string>
using namespace std;

int main(){
	string  s;
	cin>>s;
	
	string ch = "";
	int  r = 0,res = 0;
	for(int i=0;s[i];i++){
		int n = ch.find(s[i]);
		if(s[i]==' ')
			cout<<"space"<<endl;
		if(n<0){
			ch.push_back(s[i]);
			cout<<n<<" -> "<<s[i]<<endl;
		}
		else{
			cout<<endl;
            if(ch.length()>res)
               res = ch.length();
               string temp = ch.substr(0,n+1); 
        	cout<<"E -> "<<temp<<endl;
            ch.erase(ch.begin(),ch.begin()+n+1);
            ch.push_back(s[i]);
		}	
	}
	
	cout<<endl;
	cout<<res;
	
	return 0;
}

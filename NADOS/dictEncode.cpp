#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
	
	string input,temp="";
	cout<<"Dictionary Based Encoding Scheme\n";
	cout<<"Enter the string you want to encode : ";
	cin>>input;
	
	int n = input.length();
	
	map<string,int> dict;
	int code = 1;
	
	for(int i=0;i<n;i++){
		temp += input[i];
		if(dict.find(temp)==dict.end()){
			dict[temp] = code;
			code++;
		}
		temp = "";
	}
	
	cout<<"Encode Result : ";
	string c="",s;
	s += input[0];
	for(int i=1;i<n;i++){
		c += input[i];
		 temp = s + c;
		if(dict.find(temp) == dict.end()){
			//new string
			dict[temp] = code;
			code++;
			cout<<dict[s]<<" ";
			s = c;
		}
		else{
			// exists string
			s += c;
		}
		c = "";
	}
	cout<<dict[s]<<endl;

	
	return 0;
}

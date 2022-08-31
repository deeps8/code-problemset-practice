/*
	Arithmetic Encoding  Scheme
*/
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include <iomanip>

using namespace std;

string uniqString(map<char,int>& u,string str){
	string s="";
	
	for(int i=0;str[i];i++){
		u[str[i]]++;
	}
	
	for(auto m:u){
		s += m.first;
	}
	
	return s;
}

int main(){
	
	// input string by user
	string str;
	cout<<"Enter a string  : ";
	cin>>str;
	
//	transform(str.begin(), str.end(), str.begin(), ::tolower);

	int l = str.length(),ul=0;
	float sum=0;
	
	string uniqStr;
	map<char,int> uniqCount;
	map<char,float> prob,cpr,newcpr;
	
	// Calculating unique string , occurange of every character in sorted order and length. 
	uniqStr = uniqString(uniqCount,str);
	ul = uniqStr.length();
	
	cout<<"\nEntered String  : "<<str<<endl;
	cout<<"Length of entered string  : "<<l<<endl<<endl;
	
	cout<<"Unique characters are : "<<uniqStr<<endl;
	cout<<"Length of unique characters : "<<ul<<endl<<endl;
	
	cout<<"Occurance of unique characters ( Z ) : \n";
	for(auto m:uniqCount){
		cout<<"    "<<m.first<<" - "<<m.second<<endl;
		
		// calculating the probability and cumulative prob.
		prob[m.first] = (float) m.second/l;
		newcpr[m.first] = sum;
		sum += prob[m.first];
		cpr[m.first] = sum;
	}
	
	// display probs..
	cout<<"\n  -Probability- \t  -Cumulative Probability- \t    -New Cumulative Probability-\n";
	for(auto m:prob){
		cout<<"    "<<m.first<<" - "<<setprecision(4)<<m.second<<"\t\t\t"<<cpr[m.first]<<"\t\t\t\t"<<newcpr[m.first]<<endl;	
	}
	
	
	// Calculating the positions of unique characters.
	int pos;
	float low=0,high=1,range;
	
	cout<<"\nPosition of characters in the unique string : \n";
	for(int i=0;str[i];i++){
		pos = uniqStr.find(str[i]) + 1;
		
		range = high - low;
		high = low + range*cpr[str[i]];
		low = low + range*newcpr[str[i]];
		
		cout<<"    "<<str[i]<<" - "<<pos<<endl;
	}
	
	float tag = low;
	
	cout<<"Tag : "<<setprecision(4)<<tag<<endl;
	
	cout<<" ------ END  ------"<<endl;
	
	return 0;
}

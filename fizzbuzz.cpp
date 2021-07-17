#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int c3 = 0, c5 = 0;
	
	for(int i=1; i<=100; ++i) {
		
//		LOGIC 1

//		if(i % 15 == 0)
//			cout<<"fizzbuzz";		
//		else if(i%5 == 0) 
//			cout<<"buzz";
//		else if(i%3 == 0)
//			cout<<"fizz";		
//		else 
//			cout<<i;

//-----------------------------

//		LOGIC 2

		string s = "";

//		if(i%3 == 0) {
//			s += "fizz";	
//		}
//		if(i%5 == 0){
//		 	s += "buzz";
//		}

//		LOGIC 3

		c3++;
		c5++;

		if(c3 == 3) {
			s += "fizz";
			c3 = 0;
		}
		if(c5 == 5) {
			s += "buzz";
			c5 = 0;
		}
		
//		LOGIC 2 + 3
		if(s == "")	cout<<i;
		else cout<<s;
					
		cout<<endl;		
	}
	
	return 0;
}












#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int d1,d2,d3,sum=0;
	cin>>d1>>d2>>d3;
// my logic	
//	sum += min(d1,d2);
//	if(d1<=d2)
//		sum += min(2*d2+d1,min(d3+d2,2*d3+d1));
//	else
//		sum += min(2*d1+d2,min(d3+d1,2*d3+d2));	
//		

// second logic
	sum = d1+d2+d3;
	sum = min(sum,2*d1+2*d2);
	sum = min(sum,2*d2+2*d3);
	sum = min(sum,2*d1+2*d3);	
	
	
	cout<<sum;
	
	return 0;
}

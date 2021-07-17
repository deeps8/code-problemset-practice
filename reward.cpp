#include<iostream>
using namespace std;

int main(){
	
	int a1,a2,a3,b1,b2,b3,n;
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	cin>>n;
	int asum=0,bsum=0;
	asum = (a1+a2+a3)/5;
	bsum = (b1+b2+b3)/10;
	
	if((a1+a2+a3)%5 != 0)
		asum++;
	if((b1+b2+b3)%10 != 0)
		bsum++;
			
	if(asum+bsum<=n)
		cout<<"YES";
	else
		cout<<"NO";	
	
	return 0;
}

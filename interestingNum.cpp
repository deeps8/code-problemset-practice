#include<iostream>
using namespace std;
int sumNum(int n){
	int s = 0;
	while(n>0){
		s = s + n % 10;
		n=n/10;
	}
	return s;
}
int main(){
	
	int n;
	cin>>n;
	
	while(sumNum(n)%4!=0){
		n++;
	}
	cout<<n;
	
	return 0;
}

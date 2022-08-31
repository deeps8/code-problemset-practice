#include<iostream>
using namespace std;

int main(){

	int n,c=0,s=0;
	cin>>n;
    while(n/10){
    	s=0;
        while(n){
            s = s + n%10;
            n = n/10; 
        }
        n = s;
        c++;   
    }
    cout<<c;
	return 0;
}

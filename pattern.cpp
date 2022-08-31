#include<iostream>
using namespace std;

int main(){
	
//	  * 1  
//   *** 3 
//  *****
// *******
//*********
//When n = 5

	int n;
	cout<<"Enter a number : \n";
	cin>>n;	
	
	for(int i=0;i<=n;i++){
		for(int j=n-1-i;j>=0;j--){
			cout<<" ";
		}
		for(int k=1;k<i*2;k++){
			cout<<"*";
		}
				
		cout<<endl;
	}
	
	
	return 0;
}

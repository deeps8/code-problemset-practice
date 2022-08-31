#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	
	// solution area
	
	int m = *min_element(a,a+n),c=0,flag;
//	while(m<0)
	//	m = *min_element(a,a+n);
		flag = 1;
		for(int i=0;i<n;i++){
			if(a[i]>=b[i] && a[i]!=m && (a[i]-m)%b[i]==0){
				c += (a[i]-m)/b[i];
			}
			else{
				flag = 0;
			}	
		}
	
	cout<<c;
//		if(flag)
//			break;
	
//	}
	return 0;
}

// input : 
// 5
// 5 7 10 5 15
// 2 2 1 3 5

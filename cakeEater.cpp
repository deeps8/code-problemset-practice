// https://codeforces.com/problemset/problem/330/A
#include<iostream>
using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	int n,m,rst=r,cst=c;
	char s[r][c];
	for(int i=0;i<r;i++){
		int prv = 0;
		for(int j=0;j<c;j++){
			cin>>s[i][j];
			if(s[i][j]=='S')
				prv=1;
		}
		if(prv==1)
			rst--;
	}

	n = rst*c;
	
	for(int i=0;i<c;i++){
		int prv = 0;
		for(int j=0;j<r;j++){
			if(s[j][i]=='S')
				prv=1;
		}
		if(prv==1)
			cst--;
	}
	
	m = cst*r;
	
	if(n==0 || m==0)
		cout<<m+n<<endl;	
	else if(n==m)
		cout<<n+m-rst-cst<<endl;
	else	
		cout<<(n+m)-max(rst,cst)<<endl;
	cout<<n<<" "<<m<<" "<<rst<<" "<<cst<<endl;

	return 0;
}

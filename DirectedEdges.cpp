#include<iostream>
#include<algorithm>
using namespace std;

int calChanges(int a[],int mi,int ma,int di){
	int c=0;
	for(int i=mi-1;i<=ma-2;i++){
		if(di!=a[i])
			c++;
	}
	
	return c;
}

void doChanges(int a[],int mi,int ma){
	for(int i=mi-1;i<=ma-2;i++){
			a[i] = 1 -a[i];
	}
}

int main(){
	
	int n,m,q,x,y;
	cin>>n>>m;
	char s[n-1];
	int a[n-1];
	
	for(int i=0;i<n-1;i++){
		cin>>s[i];
		if(s[i]=='>')
			a[i] = 1;
		else
			a[i] = 0;
	}
	
	
	for(int i=0;i<n;i++){
		cin>>q>>x>>y;
		if(q==2){
			int di = (x<y)?1:0;
			cout<<calChanges(a,min(x,y),max(x,y),di);
		}
		else{
			doChanges(a,min(x,y),max(x,y));
		}
	}
	
	return 0;
}

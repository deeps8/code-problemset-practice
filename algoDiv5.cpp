#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v1,v2;
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2==0 && a%5==0)
			v1.push_back(a);
		else if(a%2==0 && a%5!=0)
			v2.insert(v2.begin(),a);
		else
			v2.push_back(a);	
	}
	
	sort(v1.begin(),v1.end(),greater<int>());
	
	for(int i=0; i<v1.size() ;i++)
		cout<<v1[i]<<" ";
		
	for(int i=0; i<v2.size() ;i++)
		cout<<v2[i]<<" ";
		
	return 0;		
}


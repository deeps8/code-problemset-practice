#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	vector<int> res;
	while(t-->0){
		int n,cnt=0;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		for (int i=0; i<n; i++)
		{
			for (int j=i+1; j<n; j++)
			{
				if (a[j] >= a[j-1])
					cnt++;
				else
					break;
			}
		}
		res.push_back(cnt);
	}
	
	for(int i:res){
		cout<<i<<"\n";
	}
	
	return 0;
}


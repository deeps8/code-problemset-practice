#include<bits/stdc++.h>
using namespace std;


void solve () {
	 int n,l,x1,x2;
	 cin>>n>>l;

	 map<int,int> mp;
	 for(int i=0;i<n;i++){
	 	cin>>x1>>x2;
	 	mp[x1] = x2;
	 }
	 
	int c=0,prev = mp.begin()->second,start = mp.begin()->first;
	bool flag = false;

	map<int, int>::iterator itr = mp.begin();
	itr++;
    for (; itr != mp.end(); ++itr) {

        if(prev == itr->first){
			prev = itr->second;
			c = abs(start - prev);
		}
		else{
			prev = itr->second;
			start = itr->first;
			c=0;
		}
		if(c==l){
		    	flag = true;
		    	break;
		}
    }
   
    if(flag)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

    

}

int main() {
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
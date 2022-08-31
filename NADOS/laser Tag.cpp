/*
	Question — 2: Laser Tag! CodeNation Fresher batch has a tradition of laser tag tournaments. In laser tag, two teams play against each other. A team can have any number of players >= 1. The two teams can have unequal team members. For successful completion of this tournament, Ipshita [our HR] wants that every person must have played against every other person, as part of different teams. Every Laser tag match takes 30 minutes to complete. Now the gaming arena has allowed Codenation to play for a maximum of X hours after which the arena closed. Given the number of folks in the batch as N, you will have to find out if Codenation will be able to finish the tournament before the complex closes? Note: Please return output as 0 or 1, 1 means tournament will successfully complete, 0 otherwise Note: Partial Points are present

Input Format The input contains 2 integers N and X, where N is the number of folks in the batch, and X is the number of hours they are allowed to play.

Input 2 1 Sample Output 1 Explanation For 2 players only 1 laser tag match is enough so 30 minutes (<= 1 hour) is enough for the tournament to end.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,k;
	cin>>n>>k;
	
	float res = ceil(log2(n)); 	// i get how many matches will take place.
	
	res = res * 0.5;  	// for multipling by 30 mins.
	
	if(res<=k)
		cout<<"YES";
	else
		cout<<"NO";
		
	cout<<endl<<res;
	return 0;
}

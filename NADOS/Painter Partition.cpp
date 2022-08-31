/*
	Given 2 integers A and B and an array of integars C of size N.

Element C[i] represents length of ith board.

You have to paint all N boards [C0, C1, C2, C3 … CN-1]. There are A painters available and each of them takes B units of time to paint 1 unit of board.

Calculate and return minimum time required to paint all boards under the constraints that any painter will only paint contiguous sections of board.

2 painters cannot share a board to paint. That is to say, a board
cannot be painted partially by one painter, and partially by another.
A painter will only paint contiguous boards. Which means a
configuration where painter 1 paints board 1 and 3 but not 2 is
invalid.
Return the ans % 10000003




Input Format

The first argument given is the integer A.
The second argument given is the integer B.
The third argument given is the integer array C.
Output Format

Return minimum time required to paint all boards under the constraints that any painter will only paint contiguous sections of board % 10000003.
Constraints

1 <=A <= 1000
1 <= B <= 10^6
1 <= C.size() <= 10^5
1 <= C[i] <= 10^6
For Example

Input 1:
    A = 2
    B = 5
    C = [1, 10]
Output 1:
    50
Explanation 1:
    Possibility 1:- same painter paints both blocks, time taken = 55units
    Possibility 2:- Painter 1 paints block 1, painter 2 paints block 2, time take = max(5, 50) = 50
    There are no other distinct ways to paint boards.
    ans = 50%10000003

Input 2:
    A = 10
    B = 1
    C = [1, 8, 11, 3]
Output 2:
    11
*/

#include<bits/stdc++.h>
using namespace std;

int sum(vector<int>& C,int p,int j){
	return accumulate(C.begin()+p,C.begin()+j,0);
}

int main(){
	
	int A,N,el;
	cin>>A>>N;
	
	vector<int> C(N);
	for(int i=0;i<N;i++){
		cin>>el;
		C[i] = el;
	}
	
	
	// solution
	
	int dp[A][N],best=INT_MIN,summ=0;
	dp[0][0] = 0;
	// calculating the cummulative sum and finding the max value;
	for(int i=0;i<N;i++){
		if(C[i]>best)
			best = C[i];
		summ += C[i];
		dp[0][i] = summ; 
	}
	
	//	1. 	If the number of painters are greater than the paintings or equal 
	// in this case the max element of array is the ans.
	
	if(A>=N){
		cout<<"Result : "<<best<<" min time\n";	
		return 0;
	}
	
	for(int i=0;i<A;i++){
		dp[i][0] = C[0];
	}
	
	for(int i=1;i<A;i++){
			for(int j=1;j<N;j++){
				best = INT_MAX;
				for(int p=0;p<=j;p++){
					best = min(best,max(dp[i-1][p],sum(C,p,j)));
				}
				cout<<best<<endl;
				dp[i][j] = best;
			}
	}
	
	
	cout<<"\nResult : "<<dp[A-1][N-1]<<" min time\n";
	
	
	for(int i=0;i<A;i++){
		for(int j=0;j<N;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}

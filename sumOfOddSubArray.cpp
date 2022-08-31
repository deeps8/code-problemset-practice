#include <bits/stdc++.h>
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0,len=arr.size();
        
        for(int k=0;k<len;k=k+2){
            for(int i=0,j=k;j<len;i++,j++){
                sum += accumulate(arr.begin()+i,arr.begin()+j,0);
                cout<<sum<<" ";
            }    
        }
        
        return sum;
        
    }

int main(){
	
	vector<int> arr = {1,4,2,5,3};
	
//	cout<<sumOddLengthSubarrays(arr);
	int s = accumulate(arr.begin()+0,arr.begin()+3,0);
	cout<<s;	
	return 0;
}

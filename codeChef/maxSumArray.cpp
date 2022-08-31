
#include <bits/stdc++.h>
using namespace std;

long long  sumArr(long long  arr[], int n)
{
	long long  sum = 0;

	// Iterate from 0 to n - 1
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

long long  maxSum(long long  arr[], int n, int x)
{
	sort(arr, arr + n);
	int i = 0;

	// Iterate from 0 to n - 1
	for (i = 0; i < n; i++) {
		if (x && arr[i] < 0) {
			arr[i] *= -1;
			x--;
			continue;
		}
		break;
	}
	if (i == n)
		i--;

	if (x == 0 || x % 2 == 0) {
		return sumArr(arr, n);
	}

	if (i != 0 && abs(arr[i]) >= abs(arr[i - 1])) {
		i--;
	}

	arr[i] *= -1;
	return sumArr(arr, n);
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		long long arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		long long res = maxSum(arr, n, x);
		cout<<res<<endl;
	}
	return 0;
}

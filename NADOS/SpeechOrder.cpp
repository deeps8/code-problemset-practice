/*
	There are N students in a school, who are given a task to prepare a speech for the morning assembly. 

Each student has their preferred order, i.e. at which order they want to deliver the speech.

You are the principal of the school, who has to decide the ordering of speeches so that maximum students are as close to their desired order as possible.

We need to print the 'closeness' of the speech order, which is defined as the sum of absolute distances between the preferred order and allotted order for all students.

Example: Consider 7 Students having preference order : [5, 7, 1, 2, 1, 2, 7]

The 'closeness' of the above example will be 5. We can have the following speech order to the students: [5, 6, 3, 4, 1, 2, 7].

Constraints

N <= 10000
1 <= Elements in Array <= N

Format

Input

Integer N followed by N Integers of Array

Output

Integer representing the closeness of the speech order.

Example

Sample Input

7
5 7 1 2 1 2 7

Sample Output

5


*/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	int res = 0;
	for(int i=1;i<=n;i++){
		res += abs(a[i-1]-i);
	}
	
	cout<<res;
	
	return 0;
}

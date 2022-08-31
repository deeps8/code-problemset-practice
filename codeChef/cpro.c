#include <iostream>
using namespace std;

enum hack{
	hack1=0,
	hack2=10,
	hack3=20,
	hack4=3
}hack5;

int main(){
	hack5 = hack1;
	cout<<sizeof(hack5);
	return 0;
}
// #include <iostream>
// using namespace std;

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

// enum hack{
// 	hack1=0,
// 	hack2=10,
// 	hack3=20,
// 	hack4=3
// }hack5;

// int *num(void){
// 	int a= 10;
// 	return (&a);
// }

// int main(){
// 	hack5 = hack1;
// 	cout<<sizeof(hack5)<<endl;
// 	int *b = num();
// 	cout<<b;
// 	return 0;
// }

void f(char** str_ptr){
	str_ptr++;
}

// int *num (void) 
// { 
//   int a; 
//   a = (int *) malloc (sizeof(int)); 
//   *a= 10; 
//   return a; 
// }

int main(){
	char *str = (void *)malloc(100*sizeof(char));
	strcpy(str,"AMD_Challenge");
	f(&str);
	puts(str);
	free(str);
	return 0;
}

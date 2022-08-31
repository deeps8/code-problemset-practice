//sort elements of array
//SELECTION SORT


#include<iostream>
using namespace std;

void algorithm(int arr[],int ln){

	for(int i=0;i<ln-1; i++){		//till second last element
		for(int j=i+1;j<ln;j++){		//for unsorted array from i+1 element
			if (arr[j]<arr[i]){
				int temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	for(int i=0;i<ln;i++){
		cout<<arr[i]<<" ";
	}
	
}
int main(){
	int arr[12]={83,1,45,95,45,52,11,47,0,45,67,82};
	int ln=sizeof(arr)/sizeof(arr[0]);
	
	algorithm(arr,ln);
	return 0;
	
	
}

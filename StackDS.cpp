#include<iostream>
using namespace std;

class Stacked{
	private:
		int *arr;
		int top;
	public:

		Stacked(int size){
			arr = new int(size);
			top = -1;
		}
		
		bool isEmpty(){
			return top==-1;
		}
		
		void push(int value){
			arr[++top] = value;
		}
		
		int pop(){
			return arr[top--];
		}
		
		void display(){
			if(isEmpty())
				cout<<"Stack is Empty";
				
			for(int i=0;i<=top;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	
};

int main(){
	
	Stacked *s1 = new Stacked(5);
	
	s1->display();
	s1->push(10);
	s1->push(20);
	s1->display();
	cout<<"Popped : "<<s1->pop();
	
	return 0;
}

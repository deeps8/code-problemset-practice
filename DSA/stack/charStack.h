#include<iostream>
using namespace std;

class Stack{
	private : 
		char *stk;
		int top;
	
	public:
		Stack(int size){
			stk = new char(size);
			top = -1;
		}
		
		bool isEmpty(){
			return top==-1;
		}
		
		void push(char value){
			stk[++top] = value;
		}
		
		char pop(){
			return stk[top--];
		}
		
		char topValue(){
			if(!isEmpty())
				return stk[top];
			else
				return ' ';
		}
		
		int precedence(char c){
			if(c=='^')
				return 3;
			else if(c=='*' || c=='/')
				return 2;
			else if(c=='+' || c=='-')
				return 1;
			else
				return -1;
			
		}
		
		void display(){
			if(isEmpty())
				cout<<"Stack is Empty";
				
			for(int i=0;i<=top;i++){
				cout<<stk[i]<<" ";
			}
			cout<<endl;
		}
	
};


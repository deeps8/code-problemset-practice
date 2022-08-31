// circular queue .
#include<iostream>
using namespace std;

class Queue{
	private : 
		int *q,size,front,rear;
	public :
		Queue(int size){
			this->size = size;
			q = new int(this->size);
			front = rear = -1;
		}
		/*	Is empty when : Front and Rear is both -1;
			
		*/
		bool isEmpty(){
			return front == -1;
		}
		
		bool isFull(){
			return (size-1)==rear;
		}
		
		void enqueue(int value){
			if(isEmpty()){
				front = rear = 0;
				q[rear] = value;
			}	
			else if(!isFull()){
				q[++rear] = value;
			} 
			else
				cout<<"Queue is Full\n";

		}
		
		int dequeue(){
			int el;
			if(isEmpty()){
				cout<<"Queue is Empty\n";
				return -1;	
			}
			else{
				el = q[front];
				if(front>=rear)
					front = rear = -1;
				else
					front++;
			}
			cout<<el<<endl;
			return el;
		}
		
		int rearValue(){
			if(isEmpty()){
				cout<<"Queue is Empty\n";
				return -1;	
			}
			else{
				cout<<q[rear];
				return q[rear];
			}
		}
		
		void queueDisplay(){
			if(isEmpty())
				cout<<"Queue is Empty\n";
			else{
				for(int i=front;i<=rear;i++)
					cout<<q[i]<<" ";
			}
		}
};

int main(){
	
	Queue *q = new Queue(4);
	
	cout<<"Removed Element : ";
	q->dequeue();
	cout<<"Queue Display : ";
	q->queueDisplay();
	
	cout<<"Rear Value : ";
	q->rearValue();
	
	q->enqueue(10);	q->enqueue(20);	q->enqueue(30);	q->enqueue(40);
	
	cout<<"Queue Display : ";
	q->queueDisplay();
	cout<<endl;
	
	cout<<"Rear Value : ";
	q->rearValue();
	cout<<endl;
	
	cout<<"Removed Element : ";
	q->dequeue();
	
	cout<<"Rear Value : ";
	q->rearValue();
	cout<<endl;
	
	cout<<"Queue Display : ";
	q->queueDisplay();
	cout<<endl;
	
	cout<<"Dequeued : "; q->dequeue(); 
	cout<<"Dequeued : "; q->dequeue();
	cout<<"Dequeued : "; q->dequeue(); 	
	cout<<"Dequeued : "; q->dequeue();
	
	cout<<"Rear Value : ";
	q->rearValue();
	cout<<endl;
	
	cout<<"Display Queue : ";
	q->queueDisplay();
	cout<<endl;
	
	return 0;
}

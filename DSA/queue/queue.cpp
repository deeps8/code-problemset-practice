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
		
		bool isEmpty(){
			return (front == -1) && (rear == -1);
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
			if(isEmpty()){
				cout<<"Queue is Empty\n";
				return -1;	
			}
			else if(rear==0 && front==0){
				rear = front = -1;
				return q[0];
			}
			else{
				return q[rear--];
			}
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
	
	q->dequeue();
	q->queueDisplay();
	q->rearValue();
	
	q->enqueue(10);	q->enqueue(20);	q->enqueue(30);	q->enqueue(40);
	
	q->queueDisplay();
	cout<<endl;
	
	q->rearValue();
	cout<<endl;
	
	q->dequeue();
	q->rearValue();
	cout<<endl;
	
	q->queueDisplay();
	cout<<endl;
	
	q->dequeue(); q->dequeue(); q->dequeue(); q->dequeue();
	q->rearValue();
	cout<<endl;
	
	q->queueDisplay();
	cout<<endl;
	
	return 0;
}

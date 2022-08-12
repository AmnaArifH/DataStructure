#include <iostream>
using namespace std;
class node{
	int data;
	node* next;
	public:
		node(int data){
			setData(data);
			next=NULL;
		}
		void setData(int data){
			this->data=data;
		}
		int getData(){
			return data;
		}
		void setNext(node* next){
			this->next=next;
		}
		node* getNext(){
			return next;
		}
};
class queue{
	node* head=NULL;
	public:
		bool isEmpty(){
		   return (head==NULL);
		}
		
		bool enqueue(int val){
			node* n=new node(val);
			if(head==NULL){
				head=n;
				return true;
			}
			node* temp=head;
			while(temp->getNext()!=NULL){
				temp=temp->getNext();
			}
			temp->setNext(n);
			return true;
		}
		
		bool dequeue(){
			if(isEmpty()) return false;
			node* temp=head;
			head=temp->getNext();
			delete temp;
			return true;
		}
		
		int atFront(){
			if(isEmpty()) return -99;
			return head->getData();
		}
		
		void display(){
			if(isEmpty()) return;
			node* temp=head;
			while(temp->getNext()!=NULL){
				cout<<temp->getData()<<"-->";
				temp=temp->getNext();
			}
			cout<<"NULL";
			cout<<endl;
		}
};
int main()
{
    queue q;
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
	q.enqueue(11);
	q.enqueue(13);
    cout<<"AFTER ENQUEUE:";
	q.display();
	cout<<"AFTER DEQUEUE:";
    q.dequeue();
	q.display();
	 cout<<"AFTER DEQUEUE:";
    q.dequeue();
	q.display();
	cout<<"IS EMPTY:";
    cout<<q.isEmpty();
    cout<<endl;
	cout<<"FRONT:";
    cout<<q.atFront();
    
    return 0;
}

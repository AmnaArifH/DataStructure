#include <iostream>
using namespace std;
class Node{
	int data;
	Node* next;
	public:
		Node(int val){
			setData(data);
			next=NULL;
		}
		
		void setData(int data){
			this->data=data;
		}
		
		int getData(){
			return data;
		}
		
		void setNext(Node* next){
			this->next=next;
		}
		
		Node* getNext(){
			return next;
		}
		
};
class LinkList{
	Node* head;
	public:
		bool isEmpty(){
			if(head==NULL){
				return true;
			}
			return false;
		}
		
		bool insertAtBeginning(int val){
			if(isEmpty()){
				Node* n=new Node(val);
				head=n;
			}
			Node* temp=new Node(val);
			temp->setNext(head);
			head=temp;
		}
		
		bool removeFromBeginning(){
			if(isEmpty()){
				cout<<"LIST IS EMPTY ALREADY..."<<endl;
			}
			Node* temp=head->getNext();
			delete head;
			head=temp;
		}
		
		bool insertAtLast(int val){
			if(!isEmpty()){
				Node* temp=head;
				while(head!=NULL)
				{
					temp=temp->getNext();
				}
				Node* n=new Node(val);
				temp->setNext(n);
				n->setNext(NULL);
			}
		}
		
		void display(){
			if(!isEmpty()){
				Node* temp=head;
				while(temp!=NULL){
					cout<<temp->getData()<<"--->"<<endl;
					temp=temp->getNext();
				}
			}
		}
};
int main()
{
	LinkList l1;
	l1.insertAtBeginning(1);
	l1.display();
	l1.insertAtBeginning(2);
	l1.insertAtBeginning(3);
	return 0;
}

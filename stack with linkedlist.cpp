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
class stack{
	node* head=NULL;
	node* top=NULL;
	public:
		void push(int val){
			node* n=new node(val);
			if(head==NULL){
				head=n;
				top=n;
				return;
			}
			node* temp=head;
			while(temp->getNext()!=NULL){
				temp=temp->getNext();
			}
			temp->setNext(n);
			top=n;
		}
		void display(){
			if(head==NULL) return;
			node* temp=head;
			while(temp->getNext()!=NULL){
				cout<<temp->getData()<<"-->";
				temp=temp->getNext();
			}
			cout<<"NULL";
		}
};
int main()
{
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.display();
	return 0;
}

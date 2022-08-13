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
		bool isEmpty(){
			if(head==NULL){
				return true;
			}
			return false;
		}
		
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
		
		void pop(){
			if(isEmpty()) return;
			node* temp=head;
			node* del=NULL;
			while(temp->getNext()!=top){
				temp=temp->getNext();
			}
			top=temp;
			delete temp->getNext();
			temp->setNext(NULL);
		}

		
		int atTop(){
			if(isEmpty()) return -99;
			node* temp=head;
			while(temp->getNext()!=NULL){
				temp=temp->getNext();
			}
			return temp->getData();
		}
		
		void display(){
			if(head==NULL) return;
			node* temp=head;
			while(temp!=NULL){
				cout<<temp->getData()<<"-->";
				temp=temp->getNext();
			}
			cout<<"NULL";
			cout<<endl;
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
	cout<<"IS EMPTY:"<<	s.isEmpty()<<endl;
    cout<<"AT TOP:"<<s.atTop()<<endl;
    s.pop();
    cout<<"AFTER POP:";
    s.display();
	
	return 0;
}

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
		}
		
		bool removeFromBeginning(){
			if(isEmpty()){
				cout<<"LIST IS EMPTY ALREADY..."<<endl;
			}
			Node* temp=head->getNext();
			delete head;
			head=temp;
		}
		
		
};
int main()
{
	return 0;
}

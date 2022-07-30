#include <iostream>
using namespace std;
class Node{
	int data;
	Node* next;
	public:
		Node(int val){
			setData(val);
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
class LinkedList{
	Node* head=NULL;
	public:
			bool isEmpty(){
			if(head==NULL){
				return true;
			}
			return false;
		}
	
	             int getLength(){
                        if(isEmpty()) return 0;
                        Node * temp=head;
                         int count=0;
                       while(temp!=NULL){
                      temp=temp->getNext();
                      count++;
            }
            return count;
        }
		
		bool insertAtBeginning(int val){
			if(isEmpty()){
				Node* n=new Node(val);
				head=n;
			 // this->head=new Node(val);
				return true;
			}
			Node* temp=new Node(val);
			temp->setNext(head);
			head=temp;
		}
		
		int getFirstElement(){
			if(isEmpty()) return false;
			return head->getData();
		}
		
		void display(){
			if(isEmpty()) return ;
				Node* temp=head;
				while(temp!=NULL){
					cout<<temp->getData()<<"--->";
					temp=temp->getNext();
			}
			cout<<"NULL"<<endl;
		}
		
		bool removeFromBeginning(){
			if(isEmpty()){
				cout<<"LIST IS EMPTY ALREADY..."<<endl;
			}
			Node* temp=head->getNext();
			delete head;
			head=temp;
		}
		
		bool removeFromLast(){
			if(isEmpty()) return false;
			Node *temp1=head;
			Node* temp2=head->getNext();
			while(temp2->getNext()!=NULL){
				temp1=temp1->getNext();
				temp2=temp2->getNext();
			}
			delete temp2;
			temp1->setNext(NULL);
		}
		
		int getLastElement(){
			if(isEmpty()) return false;
			Node* temp=head;
			while(temp->getNext()!=NULL){
				temp=temp->getNext();
			}
			return temp->getData();
		}
		
		int getNthElement(int n){
			if(isEmpty()) return -99;
			Node* temp=head;
			for(int i=1;i<n;i++){
				temp=temp->getNext();
			}
			return temp->getData();
		}
	};
	int main()
{
        LinkedList L1;
           cout<< L1.isEmpty()<<endl;
           cout<<L1.getLength()<<endl;
           L1.insertAtBeginning(1);
           L1.insertAtBeginning(2);
           L1.insertAtBeginning(3);
           L1.insertAtBeginning(4);
           L1.insertAtBeginning(5);
           L1.insertAtBeginning(6);
           L1.insertAtBeginning(7);
           L1.display();
           cout<<L1.getFirstElement()<<endl;
           L1.removeFromBeginning();
           L1.display();
           L1.removeFromLast();
           L1.display();
           cout<<L1.getLastElement()<<endl;
           cout<<L1.getNthElement(4)<<endl;
            return 0;
}

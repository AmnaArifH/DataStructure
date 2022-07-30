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
		
		int display(){
			if(isEmpty()) return 0;
				Node* temp=head;
				while(temp!=NULL){
					cout<<temp->getData()<<"--->";
					temp=temp->getNext();
			}
			cout<<"NULL";
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
        LinkedList L1;
           cout<< L1.isEmpty()<<endl;
           cout<<L1.getLength()<<endl;
           L1.insertAtBeginning(1);
           L1.insertAtBeginning(2);
           L1.insertAtBeginning(3);
           L1.insertAtBeginning(4);
           L1.display();
           cout<<endl;
           cout<<L1.getFirstElement()<<endl;
           L1.removeFromBeginning();
           L1.display();
            return 0;
}


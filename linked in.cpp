#include <iostream>

using namespace std;
class node{
	public:
		int value;
		node *next;
};

void print(node* n){
	while(n!=Null){
		cout<<n->value<<endl;
		n=n->next;
	}
}

int main()
{
	node* head = new node();
	node* sec = new node();
	node* third = new node();
	
	head->value=1;
	head->next=sec;
	
	sec->value=2;
	sec->next=third;
	
	third->value=3;
	third->next=Null;
	
	print(head);
}

#include <iostream>

using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;
	node(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
};

//int isExist(node* root,int val){
//	if(root==NULL) return 0;
//	if(root->data==val) return 1;
//	isExist(root->left,val);
//	isExist(root->right,val);
//}

/*bool isLeaf(node* root){
	if(root->left==NULL && root->right==NULL) return true;
	isLeaf(root->left);
	isLeaf(root->right);
}*/

/*bool externalLeaf(){       //external=leaf
	if(root->left==NULL && root->right==NULL) return true;
	externalLeaf(root->left);
	externalLeaf(root->right);
}*/

/*(bool isFullParent(node* root){
	return (root->left!=NULL && root->right!=NULL);
}*/

void preorder(node* root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root){
	if(root==NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

void inorder(node* root){
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	node* root=new node(6);
	root->left=new node(4);
	root->right=new node(9);
	root->left->left=new node(2);
	root->left->right=new node(5);
	root->right->left=new node(8);
	root->right->right=new node(10);
	
	cout<<"PREORDER TRAVERSAL:"<<endl;
	preorder(root);
	cout<<endl;
	cout<<"POSTORDER TRAVERSAL:"<<endl;
	postorder(root);
	cout<<"\n";
	cout<<"INORDER TRAVERSAL:"<<endl;
	inorder(root);
	cout<<endl;
	
//	isExist(root,6);

//    isLeaf(root);    

//   externalLeaf(root);

 //   isFullParent(root);

	
	return 0;
}
	
/*	 6
	/ \
   4   9
  / \  / \ 
 2   5 8  10
 */

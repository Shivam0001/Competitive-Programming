#include<bits/stdc++.h>
using namespace std;
class node{
	
	public:
	int data;
	node *left,*right;
	
	node(int data)
	{
		this->left=NULL;
		this->right=NULL;
		this->data=data;
	}
};

int identical(node *root,node *root1)
{
	
	if(root==NULL&&root1==NULL) return 1;
	if(root==NULL||root1==NULL) return 0;
	if(root->data==root1->data)
	{
		//cout<<"hy"<<" ";
	   return (identical(root->left,root1->left)&&identical(root->right,root1->right));
	}
	else
	return 0;
}

int main()
{
	node *root=new node(5);
	node *temp= new node(15);
	root->left=temp;
	temp= new node(21);
	root->left->left=temp;
	temp= new node(20);
	root->right=temp;
	temp= new node(17);
	root->right->right=temp;
	
	node *root1=new node(5);
	node *temp1= new node(15);
	root1->left=temp1;
	temp1= new node(21);
	root1->left->left=temp1;
	temp1= new node(20);
	root1->right=temp1;
	temp1= new node(17);
	root1->right->right=temp1;
	
	cout<<identical(root,root);
}

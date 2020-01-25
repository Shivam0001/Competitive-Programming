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


int ismirror(node *root,node *root1)
{
	if(root==NULL&&root1==NULL) return 1;
	if(root==NULL||root1==NULL) return 0;
	if(root->data==root1->data)
	{
		return ismirror(root->left,root1->right)&&ismirror(root->right,root1->left);
	}
	else
	return 0;
}

int main()
{
	node *root=new node(5);
	node *temp= new node(7);
	root->left=temp;
	temp= new node(15);
	root->left->left=temp;
	temp= new node(10);
	root->right=temp;
	
	node *root1=new node(5);
	temp= new node(7);
	root1->right=temp;
	temp= new node(15);
	root1->right->right=temp;
	temp= new node(10);
	root1->left=temp;
	cout<<ismirror(root,root1);
}

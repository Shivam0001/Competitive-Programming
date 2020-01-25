#include<bits/stdc++.h>
using namespace std;
class node{
	
	public:
	int data;
	node *left,*right;
};

int leaf(node *root)
{
	if(root==NULL) return 0;
	if(root->left==NULL&&root->right==NULL) return 1;
	return (leaf(root->left)+leaf(root->right));
}

int main()
{
	node *root=new node();
	root->data=5;
	node *temp= new node();
	temp->data=15;
	root->left=temp;
	temp= new node();
	temp->data=21;
	root->left->left=temp;
	temp= new node();
	temp->data=20;
	root->right=temp;
	temp= new node();
	temp->data=17;
	root->right->right=temp;
	cout<<leaf(root);
}

#include<bits/stdc++.h>
using namespace std;
class node{
	
	public:
	int data;
	node *left,*right;
};

int sum(node *root)
{
	if(root==NULL) return 0;
	return (sum(root->left)+sum(root->right))+root->data;
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
	cout<<sum(root);
}

//USING STACK
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

int height(node *root)
{
	if(root==NULL) return 0;
	return max(height(root->left),height(root->right))+1;
}

int maxm(int a,int b,int c)
{
	if(a>b&&a>c)
	return a;
	if(b>c)
	return b;
	else
	return c;
}
int diameter(node *root)
{
	if(root==NULL) return 0;
	return maxm(height(root->left)+height(root->right),diameter(root->left),diameter(root->right));
}


int main()
{
	node *root=new node(1);
	node *temp= new node(2);
	root->left=temp;
	temp= new node(4);
	root->left->left=temp;
	temp= new node(3);
	root->right=temp;
	temp= new node(6);
	root->right->right=temp;
	temp= new node(5);
	root->right->left=temp;
	temp= new node(6);
	root->right->right->right=temp;
	temp= new node(6);
	root->right->right->right->right=temp;

	cout<<diameter(root);
	
		
	
}

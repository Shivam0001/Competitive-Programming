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

void print(node *root,int level)
{
	if(root==NULL) return ;
	if(level ==1)
	cout<<root->data<<" ";
	print(root->left,level-1);
	print(root->right,level-1);

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

	int h=height(root);
		for(int i=1;i<=h;i++)
	print(root,i);
}

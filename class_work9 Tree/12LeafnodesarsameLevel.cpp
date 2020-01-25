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

int check(node *root,int level,int *leaflevel)
{
	if(root==NULL) return 1;
	if(root->left==NULL&&root->right==NULL)
	{
		if(*leaflevel==0)
		{
			*leaflevel=level;
			return 1;
		}
		return (level== *leaflevel);
	}
	return (check(root->left,level+1,leaflevel)&&check(root->right,level+1,leaflevel));
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
 int leaflevel=0;
	cout<<check(root,0,&leaflevel);
	
}

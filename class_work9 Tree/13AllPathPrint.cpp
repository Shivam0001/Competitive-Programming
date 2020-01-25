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

void print(node *root,char *s,int present)
{
	if(root==NULL)
		return ;
		s[present]=root->data+'0';
	if(root->left==NULL&&root->right==NULL)
	{s[present+1]='\0';
		cout<<endl;
		//for(int i=0;i<height;i++)
		cout<<s;
	}
	print(root->left,s,present+1);
	print(root->right,s,present+1);
}


int main()
{
	node *root=new node(1);
	node *temp= new node(2);
	root->left=temp;
	temp= new node(4);
	root->left->left=temp;
		temp= new node(4);
	root->left->left->left=temp;
		temp= new node(4);
	root->left->left->left->left=temp;
	temp= new node(3);
	root->right=temp;
	temp= new node(6);
	root->right->right=temp;
	temp= new node(5);
	root->right->left=temp;
	temp= new node(6);
	root->right->right->right=temp;
	temp= new node(7);
	root->right->right->left=temp;
	temp= new node(6);
	root->right->right->right->right=temp;
	char s[100];
 	int h=height(root);
	print(root,s,0);
	
}

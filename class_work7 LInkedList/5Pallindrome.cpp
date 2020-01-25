#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;	
};
void insertinfirst(Node **head,int value)
{
	Node *temp=new Node();
	temp->data=value;
	temp->next=*head;
	*head=temp;
	return ;
}
int findknode(Node *head,int index)
{
	Node *temp=head;
	int c=0;
	while(c<index&&temp!=NULL)
	{
		temp=temp->next;
		c++;
	}
	return temp->data;
}
void pal(Node *head,int count)
{
	int begin=0,end=count;
	
	while(begin<end)
	{
		if(findknode(head,begin)!=findknode(head,end))
		{
			cout<<"Not Palindrome";
			return ;
		}
		begin++;
		end--;
	}
	cout<<"Palindrome";	
	return;
}

int main()
{
	Node *head=NULL;
	int n,i,value;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=n-1;i>=0;i--)
	{
		insertinfirst(&head,a[i]);
	}
	 pal(head,n-1);
	 
}

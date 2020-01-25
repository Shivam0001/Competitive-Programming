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
void middleusingcount(Node *head)
{
	Node *temp=head;
	int count=0,c=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	temp=head;
	while(c<count/2)
	{
		temp=temp->next;
		c++;
	}
	cout<<temp->data;
	
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
	 middleusingcount(head);
	 
}

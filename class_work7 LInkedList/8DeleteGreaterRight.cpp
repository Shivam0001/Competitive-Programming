#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;	
};
int findmax(Node *head)
{
	int max;
	//Node *temp=head;
	if(head!=NULL)
	 max=head->data;
	else
	max=0;
	while(head!=NULL)
	{
		if(head->data>max)
		{
			max=head->data;
		}
		head=head->next;
		
	}
	return max;
}
void display(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
void insertinfirst(Node **head,int value)
{
	Node *temp=new Node();
	temp->data=value;
	temp->next=*head;
	*head=temp;
	return ;
}
void insertatlast( Node **head , int value)
{
	Node *temp=new Node();
	temp->data=value;
	temp->next=NULL;
	
	if(*head==NULL)
	{
		*head=temp;
		return ;
	}
	Node *last_node=*head;
	while(last_node->next!=NULL)
	{
		last_node=last_node->next;
	}
	last_node->next=temp;
	return ;
}

void deleteGreaterRight(Node **head)
{
	Node *newhead=NULL;
	Node *current=*head,
			*temp=*head;
	
	
	while(temp!=NULL)
	{
		
		if(findmax(temp->next)<(temp->data))
		{
			insertatlast(&newhead,temp->data);
		}
		
		temp=temp->next;
	}
	*head=newhead;	
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
	 deleteGreaterRight(&head);
	 display(head);
	 
}

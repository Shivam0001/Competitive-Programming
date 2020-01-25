#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;	
};

void display(Node *head)
{
	
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
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
void insertinfront(Node **head,int value)
{
	Node *temp=new Node();
	temp->data=value;
	temp->next=*head;
	*head=temp;
}
void insertafter(Node *prev_node,int value)
{
	Node *temp=new Node();
	temp->data=value;
	temp->next=prev_node->next;
	prev_node->next=temp;
	return ;
}

int main()
{
	Node *head=NULL;
	int n,value;
	do
	{
		cout<<"Enter\n 1.insert at last \n 2.insert in front \n 3.insert after node \n 4.Display \n 5.Exit";
		cin>>n;
		if(n==1)
		{
			cout<<"Enter value=";
			cin>>value;
			insertatlast(&head,value);
		}
		else if(n==2)
		{
			cout<<"Enter value=";
			cin>>value;
			insertinfront(&head,value);
		}
		else if(n==3)
		{
			cout<<"Enter value=";
			cin>>value;
			insertafter(head->next,value);
		}
		else if(n==4)
		{
			display(head);
		}
		else
		cout<<"Wrong Input";
	}while(n!=5);
	
}

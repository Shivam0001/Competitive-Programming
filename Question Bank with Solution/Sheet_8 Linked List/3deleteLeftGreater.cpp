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
	//cout<<value<<endl;
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
Node * insertGreater(Node *head1)
{
	//cout<<"inside greater";
	Node *newnode=NULL;
	int max=0;
	while(head1!=NULL)
	{
		if((head1->data) >= max)
		{
			max=head1->data;
			insertatlast(&newnode,head1->data);
		}
	head1=head1->next;
	}
	return newnode;
}

void insertinfirst(Node **head,int value)
{
	Node *temp=new Node();
	temp->data=value;
	temp->next=*head;
	*head=temp;
	return ;
}
int main()
{
	Node *head1=NULL;
	Node *head2=NULL;
	int n,i,value;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
	cin>>a[i];

	for(i=n-1;i>=0;i--)
	{
		insertinfirst(&head1,a[i]);
	}

//	display(head1);
//	display(head2);
	Node *newnode= insertGreater(head1);
	//display(head1);
	display(newnode);
}

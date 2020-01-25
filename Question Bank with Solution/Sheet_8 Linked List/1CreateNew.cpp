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
Node * insertGreater(Node *head1,Node *head2)
{
	//cout<<"inside greater";
	Node *newnode=NULL;
	while(head1!=NULL)
	{
		if((head1->data) > (head2->data))
		{
			//cout<<head1->data<<endl;
			insertatlast(&newnode,head1->data);
		}
		else 
		{
			//cout<<head2->data<<endl;
			insertatlast(&newnode,head2->data);
		}

	head1=head1->next;
	head2=head2->next;
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
	int n,i,value,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<m;i++)
	cin>>b[i];
	for(i=n-1;i>=0;i--)
	{
		insertinfirst(&head1,a[i]);
	}
	for(i=m-1;i>=0;i--)
	{
		insertinfirst(&head2,b[i]);
	}
//	display(head1);
//	display(head2);
	Node *newnode= insertGreater(head1,head2);
	//display(head1);
	display(newnode);
}

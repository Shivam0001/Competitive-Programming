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

void deleteAlternative(Node *head1)
{
	Node *temp;
	while( head1!=NULL && head1->next!=NULL )
	{
		temp=head1->next;
		head1->next=temp->next;
		delete(temp);
		head1=head1->next;
		
	}
	
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

display(head1);
	deleteAlternative(head1);

	display(head1);
}

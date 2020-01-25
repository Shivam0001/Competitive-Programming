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

void median(Node *head1)
{
	Node *ptr1=head1,*ptr2=head1;
	
	while(ptr2!=NULL && ptr2->next!=NULL )
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
	}
	cout<<ptr1->data;
	return ;
	
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
	int n,i,value;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
	cin>>a[i];

	for(i=n-1;i>=0;i--)
	{
		insertinfirst(&head1,a[i]);
	}

	median(head1);

	
}

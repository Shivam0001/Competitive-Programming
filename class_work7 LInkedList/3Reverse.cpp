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
void insertinfirst(Node **head,int value)
{
	Node *temp=new Node();
	temp->data=value;
	temp->next=*head;
	*head=temp;
	return ;
}
void reverse(Node **head)
{
	Node *prev=NULL,
		*current=*head,
		*right;
		while(current!=NULL)
		{
			right=current->next;
			current->next=prev;
			prev=current;
			current=right;
		}
		*head=prev;
		
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
	 reverse(&head);
	 display(head);
}

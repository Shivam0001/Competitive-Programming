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
Node * reverse( Node *head)
{
	Node *temp=head;
	stack<Node*> s;
	while(temp->next!=NULL)
	{
		s.push(temp);
		temp=temp->next;
	 } 
	 head=temp;
	 while(s.empty()!=true)
	 {
	 	temp->next=s.top();
	 	s.pop();
	 	temp=temp->next;
	 }
	 temp->next=NULL;
	 
	return head;
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


	Node *newnode= reverse(head1);
	
	display(newnode);
}

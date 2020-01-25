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

void iscircular(Node *head)
{
	Node *temp=head;
	temp=temp->next;
	while(temp!=NULL)
	{
		if(temp==head)
		{
		cout<<"Circular link list";
		return ;
		}
		temp=temp->next;
	}
		cout<<"NOT Circular";
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
	Node *head=NULL;
	Node *n1=new Node();
	Node *n2=new Node();
	Node *n3=new Node();
	Node *n4=new Node();
	Node *n5=new Node();
	Node *n6=new Node();
	n1->data=1;
	n2->data=2;
	n3->data=3;
	n4->data=4;
	n5->data=5;
	n6->data=6;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=n1;
	head=n1;

	iscircular(head);

	
}

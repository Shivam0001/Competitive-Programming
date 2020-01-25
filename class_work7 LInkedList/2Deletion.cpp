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
void deletefromfirst(Node **head)
{
	Node *temp=*head;
	*head=temp->next;
	delete(temp);
}
void deletekey(Node **head,int key)
{
	Node *temp=*head;
	Node *prev;
	if(temp->data==key)
	{
		*head=temp->next;
		delete(temp);
		return ;
	}
	while(temp->data!=key&&temp!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
		cout<<"NO key is found";
		return ;
	}
	prev->next=temp->next;
	delete(temp);
	
}
void deleteafternode(Node *prev)
{
	Node *temp=prev->next;
	prev->next=temp->next;
	delete(temp);
	
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
	
	do
	{
		cout<<"Enter\n 1.delete from first \n 2.delete key \n 3.delete after 2nd node \n 4.Display \n 5.Exit";
		cin>>n;
		if(n==1)
		{
			deletefromfirst(&head);
		}
		else if(n==2)
		{
			cout<<"Enter value=";
			cin>>value;
			deletekey(&head,value);
		}
		else if(n==3)
		{
			deleteafternode(head->next);
		}
		else if(n==4)
		{
			display(head);
		}
		else
		cout<<"Wrong Input";
	}while(n!=5);
}

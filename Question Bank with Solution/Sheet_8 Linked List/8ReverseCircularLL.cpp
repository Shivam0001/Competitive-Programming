#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;	
};

void display(Node *last)
{
	Node *temp=last->next;
	while(temp!=last)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<last->data;
	cout<<endl;
}

void reverse(Node **last)
{
	Node *right,*first=(*last)->next,
		*current=(*last)->next,
		*prev=(*last);
	while(current!=(*last))
	{
		right=current->next;
		current->next=prev;
		prev=current;
		current=right;
	}
	current->next=prev;
	*last=first;
}

void insertinfirst(Node **last,int value)
{
	Node *temp=new Node();
	temp->data=value;

	if(*last==NULL)
	{
		*last=temp;
		temp->next=*last;
		//cout<<"null";
//		return *last;	
	}
	else
	{//cout<<"else";
	temp->next=(*last)->next;
	(*last)->next=temp;
	}	
	//display(*last);
	return ;
}
int main()
{
	Node *last=NULL;
	int n,i,value;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
	cin>>a[i];

	for(i=n-1;i>=0;i--)
	{
		insertinfirst(&last,a[i]);
	}
	display(last);
	reverse(&last);
	display(last);

	
}

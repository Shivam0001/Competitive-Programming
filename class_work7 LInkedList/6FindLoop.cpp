#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;	
};

void findloop(Node *head)
{
	Node *ptr1,*ptr2;
	ptr1=head;
	ptr2=head;
	while(ptr2!=NULL && ptr2->next!=NULL)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
		if(ptr1==ptr2)
		{
			cout<<"LOOP";
			return ;
		}
		
	}
	cout<<"NO LOOP";

}

int main()
{
	Node *head=NULL;
	int n,i,value;

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
	
	findloop(head);
	
}

//Traverse using TWO LOOPS
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;	
};

void DetectY(Node *head1,Node *head2)
{
	Node *ptr1,*ptr2;
	ptr1=head1;
	ptr2=head2;
	while(ptr1!=NULL)
	{
		ptr2=head2;
		while(ptr2!=NULL)
		{
			
			if(ptr1->next==ptr2->next)
			{
				cout<<"Y exist";
				return ;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	cout<<"DoesN't Exist'";

}

int main()
{
	Node *head1=NULL,*head2=NULL;
	int n,i,value;

	Node *n1=new Node();
	Node *n2=new Node();
	Node *n3=new Node();
	Node *n4=new Node();
	Node *n5=new Node();
	Node *n6=new Node();
	Node *n7=new Node();
	Node *n8=new Node();
	n1->data=1;
	n2->data=2;
	n3->data=3;
	n4->data=4;
	n5->data=5;
	n6->data=6;
	n7->data=6;
	n8->data=6;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n7->next=n8;
	n8->next=n4;
	n6->next=NULL;
	
	head1=n1;
	head2=n7;
	
	DetectY(head1,head2);
	
}

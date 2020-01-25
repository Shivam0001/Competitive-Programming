#include<bits/stdc++.h>
using namespace std;
char phone[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
char no[100];


void getstring(char s[],int present,int end)
{
	if(present==end)
	{
		s[present]='\0';
			cout<<s<<endl;	
		return ;
	}
	
	int index=no[present]-'0';
	for(int i=0;i<strlen(phone[index]);i++)
	{	
	s[present]=phone[index][i];
	getstring(s,present+1,end);
	}

}

int main()
{
	int k,n;
	char s[100];
	cin>>no;
	k=strlen(no);
	getstring(s,0,k);
	return 0;
}

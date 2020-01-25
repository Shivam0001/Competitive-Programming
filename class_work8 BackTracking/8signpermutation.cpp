#include<bits/stdc++.h>
using namespace std;
char sign[10]={'+','*'};
char no[100];


void getstring(char s[],int present,int end)
{
	if(present==end)
	{
		s[present]='\0';
			cout<<s<<endl;	
		return ;
	}
	
	for(int i=0;i<strlen(sign);i++)
	{	
	s[present]=no[i];
	for(int j=0;j<strlen(no);j++)
	s[present+1]=sign[0];
	getstring(s,present+2,end);
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

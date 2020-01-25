#include<bits/stdc++.h>
using namespace std;

void getstring(char *s,int present,int end )
{
	if(present==end)
	{
		//s[present]='\0';
		cout<<s<<endl;
		return ;
	}
	
	s[present]='0';
	getstring(s,present+1,end);
	s[present]='1';
	getstring(s,present+1,end);

}

int main()
{
	int k;
	cin>>k;
	char c[k+1];
	getstring(c,0,k);

}

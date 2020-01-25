#include<bits/stdc++.h>
using namespace std;

int atoi(char s[] )
{
	int value=0,i=0;
	while(s[i]!='\0')
	{
		value=value*10+s[i]-'0';
		i++;
	}
	return value;
	
}

void getstring(char *s,int present,int end )
{
	if(present==end)
	{
		s[present]='\0';
		int n=atoi(s);
		if(n%7==0)
		cout<<s<<endl;
		return ;
	}


for(int i=1;i<=9;i++)
{
	s[present]='0'+i;
	getstring(s,present+1,end);
}
	

}

int main()
{
	int k;
	cin>>k;
	char c[k+1];
	getstring(c,0,k);

}

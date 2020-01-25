#include<bits/stdc++.h>
using namespace std;
int counter=0;
int check(char *s)
{
	int i=0,j;
	while(s[i]!='\0')
	{
		j=i+1;
		if((s[i+1]-'0')-(s[i]-'0')==1)
		{
			return 0;
		}
		else
		{
			while(s[j]!='\0')
			{
				if(s[i]==s[j])
			 	return 0;
			 	j++;
			}
			
		}
		i++;
	}
	return 1;
}

void getstring(char s[],int present,int end)
{
	if(present==end)
	{
		s[present]='\0';
		if(check(s))
		{
			cout<<s<<endl;
			counter++;
		}
		
		return ;
	}
	for(int i=1;i<=end;i++)
	{	
	s[present]=i+'0';
	getstring(s,present+1,end);
	}

}

int main()
{
	int k,n,c=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	//cout<<c;
	k=c;
	char s[k+1];
	getstring(s,0,k);
	cout<<counter;
	return 0;
}

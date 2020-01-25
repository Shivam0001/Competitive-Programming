#include<bits/stdc++.h>
using namespace std;

int atoi(char s[])
{
int l=strlen(s);
	int value=0;
	int i=0;
	while(i<l)
	{
		value=value*10+s[i]-'0';
		i++;
	}
	return value;
}

void print(char s[],int l, int r)
{
	if(l==r)
	{
		if(atoi(s)%7==0)
		cout<<s<<endl;
		return ;
	}
	for(int i=l;i<r;i++)
	{
	swap(s[l],s[i]);
	print(s,l+1,r);
	swap(s[l],s[i]);
	}
	
}


int main()
{
	char s[100];
	cin>>s;
	int l=strlen(s);
	print(s,0,l);
}

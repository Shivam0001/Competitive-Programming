#include<bits/stdc++.h>
using namespace std;

int check(char s[])
{
	int l=strlen(s);
	int i=0;
	while(i<l)
	{
		if((s[i+1]-'0')-(s[i]-'0')==1)
			{
				return 0;
			}
			i++;
	}
	return 1;
}

void print(char s[],int l, int r)
{
	if(l==r)
	{
		if(check(s))
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

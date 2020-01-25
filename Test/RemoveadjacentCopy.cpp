#include<bits/stdc++.h>
using namespace std;
int flag;
int  check(char a[])
{
	int len=strlen(a);
	for(int i=0;i<len-1;i++)
	if(a[i]==a[i+1])
	return 1;
	
	return 0;
	
}

int main()
{
	//char new[100];
	char a[1000000];
	cin>>a;
	int i=0,j=0;
		while(check(a))
		{
			i=0;
			j=0;
			while(a[i]!='\0')
			{
					if(a[i]==a[i+1])
				{
					i++;
				}
				else
				{
					a[j]=a[i];
					j++;
				}
				i++;
			}
			a[j]='\0';
		}
		
		{
			cout<<a;
			return 0;
		}
	
}

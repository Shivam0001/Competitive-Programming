#include<bits/stdc++.h>
using namespace std;
//NO of word
int main()
{
	char c[100];
	gets(c);
	//cout<<c;
	int i=0,count=0,flag=0;
	while(c[i]!='\0')
	{
		if(c[i]==' '||c[i]=='\t'||c[i]=='\n')
		{
			flag=0;
		}
		else if(flag==0)
		{
			count++;
			flag=1;
		}
		i++;
	}
	
	cout<<count;
	
	return 0;
}

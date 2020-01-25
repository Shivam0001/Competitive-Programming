#include<bits/stdc++.h>
using namespace std;
//NO of word
int main()
{
	char c[100];
	cin>>c;
	int len=strlen(c);
	int j,max=0;
	int i=0,count=0,index;
	
	for(i='a';i<='z';i++)
	{
		count=0;
		for(j=0;j<len;j++)
		{
			if(c[j]==i)
			{
				count++;
				
			}
		}
		if(count>max)
		{
			max=count;
			index=i;
		}
	}
	cout<<(char)(index-'a'+'A');
	return 0;
}

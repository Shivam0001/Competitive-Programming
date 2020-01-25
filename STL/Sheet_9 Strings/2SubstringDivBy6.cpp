#include<bits/stdc++.h>
using namespace std;

int atoi(string s)
{
	int val=0,i=0;
	int len=s.length();
	while( i<len)
	{
		val=val*10+(s[i]-'0');
		i++;
	}
	return val;
}

int main()
{
	string s;
	cin>>s;
	int len=s.length();
	for(int j =1;j<=len;j++)
	{
		for(int i=0;i+j<=len;i++)
		{
			string check=s.substr(i,j);
			int n=atoi(s.substr(i,j));
			if(n%6==0)
			{
				if(check[0]!='0'|| check.length()==1)
				{
					cout<<s.substr(i,j)<<" ";
				}
			}
		}
	}
	//cout<<s;
}

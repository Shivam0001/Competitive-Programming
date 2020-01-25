#include<bits/stdc++.h>
using namespace std;


int main()
{
	int c=0;
	string s1,s2;
	cin>>s1;
	int len=s1.length();
	for(int i=0;i<len;i++)
	{
		for(int j=1;j<=len-i;j++)
		{
			string s=s1.substr(i,j);
			if(s1.find(s)==i)
			 c++;
		}
	}
cout<<c;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a="abcd";
	int len=a.length();
	for(int i=0;i<len;i++)
	{
		for(int j=1;j<=len-i;j++)
		{
			cout<<a.substr(i,j);
			cout<<endl;	
		}	
	}
}

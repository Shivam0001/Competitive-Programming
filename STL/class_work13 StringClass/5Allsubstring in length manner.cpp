#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a="abcd";
	int len=a.length();
	for(int j=1;j<=len;j++)
	{
	for(int i=0;i+j<=len;i++)
	{
			cout<<a.substr(i,j);
				cout<<endl;		
	}
	}
}

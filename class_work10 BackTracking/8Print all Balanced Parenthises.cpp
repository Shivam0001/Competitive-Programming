#include<bits/stdc++.h>
using namespace std;

void print(int pos,int n, int open,int close)
{
	static char str[10000];
	if(close==n)
	{
		cout<<str<<endl;
		return ;
	}
	if(close<open)
	{
		str[pos]='}';
		print(pos+1,n,open,close+1);
	}
	if(open<n)
	{
		str[pos]='{';
		print(pos+1,n,open+1,close);
	}
}

int main()
{
	int n;
	cin>>n;
	print(0,n,0,0);
}

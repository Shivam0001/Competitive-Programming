#include<bits/stdc++.h>
using namespace std;
int mult(int m,int n)
{
	if(n==0)
	return 0;
	else
	return m+mult(m,n-1);
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<mult(m,n);
}


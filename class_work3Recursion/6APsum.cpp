#include<bits/stdc++.h>
using namespace std;

int  sum(int a,int d,int n,int i)
{
	
	if(n==0)
	return 0;	
	return a+d*i+sum(a,d,n-1,i+1);
}

int main()
{
	int n,d,a,i=0;
	cin>>a>>d>>n;
	if(n==1)
	{
	cout<<a;
	return 0;
	}
	cout<<sum(a,d,n,i);

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=0,j=0,k=0,first=0,second=0,mul=1;
	cin>>n;
	
	int a[n]={0};

while(n!=0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	cout<<a[j]<<" ";
}

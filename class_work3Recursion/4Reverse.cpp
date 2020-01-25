#include<bits/stdc++.h>
using namespace std;

 void reverse(int a[],int first,int last)
{
	//cout<<first<<" "<<last<<endl;
	if(first<last)
	{
	int t=a[last];
	a[last]=a[first];
	a[first]=t;
	}
	else
	return ;
	 reverse(a,first+1,last-1);
}

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	reverse(a,0,n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}

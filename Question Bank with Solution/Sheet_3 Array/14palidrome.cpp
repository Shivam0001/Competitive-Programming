#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,c=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	i=0;j=n-1;
	while(i<j)
	{
		if(a[i]!=a[j])
		{
		cout<<"Not Palindrome";
		return 0;
		}
		i++;j--;
	}
	cout<<"Palindrome";
	
	
}

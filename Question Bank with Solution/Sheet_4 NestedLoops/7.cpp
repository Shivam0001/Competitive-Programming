#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,i,k,j;
	cin>>n;
	
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
	for(i=0;i<n;i++)
		if(a[i]!=a[i+1])
		cout<<a[i]<<endl;
}
//	cout<<"No";
	


#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,i,flag,j,rsum=0;
	cin>>n;
	int a[n],b[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	int c=0;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		if(pow(a[i],b[j])>pow(b[j],a[i]))
			{
				c++;
				//cout<<a[i]<<" "<<b[j]<<endl;
				}	
		cout<<c;
		
}

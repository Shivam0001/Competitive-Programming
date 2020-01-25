#include<bits/stdc++.h>
using namespace std;
int max(int a[],int n,int maxm)
{
	
	if(n==-1)
	return maxm;
	if(a[n]>maxm)
	maxm=a[n];
	return max(a,n-1,maxm);
	

}
int main()
{
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<max(a,n-2,a[n-1]);


}


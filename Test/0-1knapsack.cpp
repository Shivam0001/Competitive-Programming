#include<bits/stdc++.h>
using namespace std;

int knapsack(int v[],int w[],int n,int tw)
{
	int in,ex;
	if(tw<0)
	return -1;
	if(tw==0||n<0)
	return 0;
	else
	{
		in=v[n]+knapsack(v,w,n-1,tw-w[n]);
		ex=knapsack(v,w,n-1,tw);
	 } 
	 return max(in,ex);
}

int main()
{
	int v[100],w[100],tw,n;
	cin>>tw>>n;
	for(int i=0;i<n;i++)
	{
		cin>>w[i]>>v[i];
		cout<<w[i]<<" "<<v[i]<<endl;
	}
	cout<<"maximum weigth"<<knapsack(v,w,n-1,tw);

	
}

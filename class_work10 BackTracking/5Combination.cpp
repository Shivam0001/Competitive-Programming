
#include<bits/stdc++.h>
using namespace std;

void comb(int a[],int n, int r,int inputindex,int out[],int outindex)
{

if(outindex==r)
	{
		for(int i=0;i<outindex;i++)
	cout<<out[i];
	cout<<endl;
	return ;
	}
	if(inputindex>=n)
	return ;
	comb(a,n,r,inputindex+1,out,outindex);
	out[outindex]=a[inputindex];
	comb(a,n,r,inputindex+1,out,outindex+1);

	
}

int main()
{
	int a[]={1,2,3,4,5};
	int out[1000];
	int r=3;
	int n=sizeof(a)/sizeof(int);
	comb(a,n,r,0,out,0);
}




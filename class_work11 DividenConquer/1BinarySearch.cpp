#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int key,int low,int high)
{
	int mid=(low+high)/2;
	if(low>high) return -1;
	if(key==a[mid]) return mid;
	if(a[mid]>key) return binarysearch(a,key,low,mid-1);
	else  return binarysearch(a,key,mid+1,high);
}

int main()
{
	int n,i,key;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>key;
	cout<<binarysearch(a,key,0,n-1);
}

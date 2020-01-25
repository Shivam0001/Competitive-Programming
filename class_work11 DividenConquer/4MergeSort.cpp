#include<bits/stdc++.h>
using namespace std;
int n;
int elementfreq(int a[],int low,int high,int key)
{
	int c=0;
	int mid=(low+high)/2;
	if(low>high) return -1;
	else if(a[mid]==key)
	{
		c++;
		int i=mid-1,j=mid+1;
		while(a[mid]==a[i])
		{
			c++;
			i--;
		}
		while(a[mid]==a[j])
		{
			c++;
			j++;
		}	
		return c;
 	}	 
	else if(a[mid]>key) return elementfreq(a,low,mid-1,key);
	else return elementfreq(a,low,mid-1,key);
		
}
void mergesort(int a[],int l,int m,int r)
{
	int n1=m-l+1,
	n2=r-m;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++)
		left[i]=a[l+i];
	for(int i=0;i<n2;i++)
		right[i]=a[m+i+1];
		int i=0,j=0,k=l;
		while(i<n1 && j<n2)
		{
			if(left[i]<=right[j])
			{
				a[k]=left[i];
				i++;
			}
			else
			{
				a[k]=right[j];
				j++;
			}
			k++;
		}
		while(i<n1)
		{
			a[k]=left[i];
			i++;
			k++;
			}
			while(j<n2)
		{
			a[k]=right[j];
			j++;
			k++;
			}	
	
	
}
void merge(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		merge(a,l,m);
		merge(a,m+1,r);
		mergesort(a,l,m,r);
	}
}

int main()
{
	int n,i,key;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	merge(a,0,n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}

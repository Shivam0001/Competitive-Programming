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

int main()
{
	int n,i,key;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>key;
	cout<<"Freqhuency of "<<key<<" is "<<elementfreq(a,0,n-1,key);
}

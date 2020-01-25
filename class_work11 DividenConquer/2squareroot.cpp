#include<bits/stdc++.h>
using namespace std;
int n;
int sqrroot(int low,int high,int n)
{
	int mid=(low+high)/2;
	if(mid*mid<=n && (mid+1)*(mid+1)>n) return mid;
	else if(mid*mid>n) return sqrroot(low,mid,n);
	else if(mid*mid<n) return sqrroot(mid,high,n);
	else return -1;	
}

int main()
{
	int i,key;
	cin>>n;
	cout<<sqrroot(1,n,n);
}

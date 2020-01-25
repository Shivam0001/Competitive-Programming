#include<bits/stdc++.h>
using namespace std;

int pal(int n,int temp)
{
	if(n==0)
	return temp;
	temp=temp*10+n%10;
	return pal(n/10,temp);
}

int main()
{
	int n;
	cin>>n;
	int p=pal(n,0);
	if(p==n)
	cout<<"Pallindrome";
	else
	cout<<"NOT palindrome";
	
}

//#include<stdio.h>
//#include<string.h>
//void pal(char a[],int start,int end)
//{
//	
//if(start>=end) printf("Pallindrome");
//else if(a[start]==a[end])
//return pal(a,start+1,end-1);
//else
//printf("Not Pallindrome");
//}
//
//int main()
//{
//	char a[100];
//	gets(a);
//	int size=strlen(a);
//pal(a,0,size-1 );
//}

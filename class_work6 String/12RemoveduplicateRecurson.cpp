#include<bits/stdc++.h>
using namespace std;

void remove(char a[],int i,int j,int len)
{
	if(j>len)
	{
		
		a[i]='\0';
	return ;
	}
	else
	while(a[j]==a[j+1])
	{
		j++;
	}

	a[i]=a[j];
	i++;
	j++;
	return remove(a,i,j,len);
 } 
int main()
{
	char c[10000];
	cin>>c;
	int d=0,temp,start,end,max=0,i;
	int len=strlen(c);
	remove(c,0,0,len);
	for(i=0;c[i]!='\0';i++)
	cout<<c[i]<<" ";
	
}

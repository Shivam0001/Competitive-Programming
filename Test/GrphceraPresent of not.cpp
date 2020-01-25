#include<bits/stdc++.h>
using namespace std;

int main()
{
	char check[]="graphicera";
	char a[1000000];
	cin>>a;
	int i=0,j=0;
	while(a[i]!='\0' && check[j]!='\0')
	{
		if(a[i]==check[j])
		{
			i++;
			j++;
		}
		else
		i++;
	}
	if(check[j]=='\0')
	cout<<"yes";
	else
	cout<<"No";
	
}

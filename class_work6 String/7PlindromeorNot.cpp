#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c[10000];
	cin>>c;
	int len=strlen(c);
	int i=0,j,k;
	while(i<len)
	{
	
		if(c[i]!=c[len-1])
		{
			cout<<"NO";
			return 0;
		}
		i++;
		len--;
	}
	cout<<"Yes";
	
	return 0;
}

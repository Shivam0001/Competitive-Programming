#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c[100];
	cin>>c;
	int i=0,count=0;
	while(c[i]!='\0')
	{
		if(c[i]>='0' &&c[i]<='9')
			count++;
		i++;
	}
	cout<<count;
	return 0;
}

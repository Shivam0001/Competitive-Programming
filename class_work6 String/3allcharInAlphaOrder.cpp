#include<bits/stdc++.h>
using namespace std;


int main()
{
	char c[10000],b[100000];
	cin>>c;
	int len=strlen(c);

	strcpy(b,c);
	sort(c,c+len);
	//cout<<b<<" "<<c;
	for(int i=0;i<len;i++)
	{
		if(b[i]==c[i])
		{
			continue;
		}
		else
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}

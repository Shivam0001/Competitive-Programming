#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,len;
	string a,b;
	string c="";
	cin>>a;
	cin>>b;
	int len1=a.length();
	int len2=b.length();
	

	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	//cout<<a<<" "<<b;
	int carry=0;
	while(i<len1&&i<len2)
	{
		int sum=(a[i]-'0')+(b[i]-'0')+carry;
		c.push_back(sum%10+'0');
		carry=sum/10;
		i++;
	}
	
	while(i<len1)
	{
		int sum=(a[i]-'0')+carry;
		c.push_back(sum%10+'0');
		carry=sum/10;
		i++;
	}
	while(i<len2)
	{
		int sum=(b[i]-'0')+carry;
		c.push_back(sum%10+'0');
		carry=sum/10;
		i++;
	}
	if(carry)
	c.push_back(carry+'0');
	reverse(c.begin(),c.end());
	cout<<c;

		
	
	
}

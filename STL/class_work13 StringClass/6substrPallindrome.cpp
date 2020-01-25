#include<bits/stdc++.h>
using namespace std;

int pal(string s)
{

	int i=0;
	int l=s.length()-1;
	while(i<l)
	{
		if(s[i]!=s[l])
		{
			return 0;
		}
		i++;
		l--;
	}
	return 1;
}

int main()
{
	string a="aabc";
	int len=a.length();
	for(int i=0;i<=len;i++)
	{
		for(int j=1;j<=len-i;j++)
		{
		string print=a.substr(i,j);
		if(pal(print)==1)
			{
				cout<<print;
				cout<<endl;		
			}
		}	
	}

}

#include<bits/stdc++.h>
using namespace std;

int check(string s,string p)
{
	
	
	int len1=s.length(),len2=p.length();
	int i=0,j=0;
	//cout<<len1<<" "<<len2;
	while(i<len1&&j<len2)
	{
		if(s[i]==p[j])
		{
			
			i++;
			j++;
		}
		else
		i++;
	}
	
	if(j>=len2)
	{
		
		return len1;
	}
	else 
	{
		//cout<<len1<<" "<<len2;
		return -1;
	}
}

int main()
{
	string s,p,final,print,copy;
	getline(cin,s);
	cin>>p;
	int len=s.length();
	int min=INT_MAX;
	sort(p.begin(),p.end());
	for(int i=0;i<=len;i++)
		{
			for(int j =1;j<=len-i;j++)
			{
				
			    print=s.substr(i,j);
			    copy=print;
			   sort(copy.begin(),copy.end());
			  int slen=check(copy,p);
			  //cout<<"out";
			  
			  	if(slen<min && slen!=-1)
			  	{
			  		
			  		min=slen;
			  		 final=print;
				  }		
			}
		}
		cout<<final;
	
}

#include<bits/stdc++.h>
using namespace std;
bool dis(char a[],int i,int j)
{
   while(i<j)
    {
        if (a[i] == a[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
	char c[10000],b[100000];
	cin>>c;
	int d=0,temp,start,end,max=0,i;
	int len=strlen(c);
	for( i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{temp=0;
			if(dis(c,i,j))
			{
				temp=abs(i-j);
				if(temp>max)
				{
					max=temp;
					start=i;
					end=j;
				}
			}

		}
	}
	for(i=start;i<=end;i++)
	{
		cout<<c[i];
	}
	
}

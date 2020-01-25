//#include <iostream>
//#include <string>
//using namespace std;

//
//int longestPalindrome(string& str, string& palindromeStr)
//{
//    int max = 0, start = 0, end = 0;
//    for (int i = 0; i < str.length(); ++i)
//    {
//        for (int j = i+1; j < str.length(); ++j)
//        {
//            string sub = str.substr(i, j);
//            if (isPalindrome(sub) && max < sub.length())
//            {
//                max = sub.length();
//                start = i;
//                end = j;
//            }
//        }
//    }
//    palindromeStr = str.substr(start, end);
//    return max;
//}
//
//int main()
//{
//    string str = "forgeekskeegfor";
//    string palindromeStr;
//    cout << longestPalindrome(str, palindromeStr) << '\n';
//    cout << palindromeStr << '\n';
//}


#include<bits/stdc++.h>
using namespace std;
bool pal(char a[],int i,int j)
{
   while(i<j)
    {
        if (a[i] != a[j])
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
			if(pal(c,i,j))
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

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >>n;
		cin >>k;
		string str;
		cin >> str;
		str.push_back('\0');
		int arr[k][20];
		for(int i=0;i<k;i++)
		{
			for (int j=0;j<20;j++)
			{
				arr[i][j]=0;
			}
		}
		for(int i=0;i<k;i++)
		{
			string str1;
			cin >> str1;
			str1.push_back('\0');
			for(int j=0;str1[j]!='\0';j++)
			{
				int a=(int)(str1[j]);
				a=a-97;
				arr[i][a]++;
			}
		}
		int temp=0;
		for(int i=0;i<n;i++)
		{
			int a=(int)(str[i]);
			a=a-97;
			if(arr[temp][a]>0)
			{
				cout<<temp+1<<" ";
			}
			else
			{
				for(int j=0;j<k;j++)
				{
					if(arr[j][a]>0)
					{
						temp=j;
						cout<<temp+1<<" ";
						break;
					}
				}
			}
		}
		cout<<"\n";
	}
}

#include<iostream>
#include <string.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		char ar[n][7];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			cin >> arr[i];
			//ar[i].push_back('\0');
		}
		int temp=0,temp1=0,res=0;
		int i=0;
		while(1)
		{
			if(i<n-1)
			{
				while(strcmp(ar[i],ar[i+1])==0)
				{
					temp1++;
					if(arr[i]==1)
					{
						temp++;
					}
					i++;
				}
			}
			temp1++;
			if(arr[i]==1)
			{
				temp++;
			}
			if(temp>(temp1/2))
			{
				res=res+temp;
			}
			else
			{
				//cout << ar[i]<<"   "<<arr[i]<<endl;
				res=res+temp1-temp;
			}
			temp1=0;
			temp=0;
			if(i==n-1)
			{
				break;
			}
			i++;
		}
		cout<<res<<endl;
	}
	
}

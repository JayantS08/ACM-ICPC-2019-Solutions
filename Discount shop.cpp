#include<iostream>
#include<string.h>
using namespace std;

void Lowest(string str, int n, string &res) 
{ 
    int len = str.length(); 

    if (len <= n) 
        return; 
  
    int minIndex = 0; 
    for (int i = 1; i<=n ; i++) 
        if (str[i] < str[minIndex]) 
            minIndex = i; 
  
    res.push_back(str[minIndex]); 
  

    string new_str = str.substr(minIndex+1, len-minIndex); 
  

    Lowest(new_str, n-minIndex, res); 
} 
  

string LowestNum(string str, int n) 
{ 
    string res = ""; 
    Lowest(str, n, res); 
    return res; 
} 
  
 
int main() 
{ 
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        str.push_back('\0');
        int check=0;
        for(int i=0;str[i]!=0;i++)
        {
            if(str[i]=='0')
            {
             check++;   
            }
        }
        if(check==(str.length()-2))
        {
            cout<<'0'<<endl;
        }
        else
        {
        int n = 1; 
        string a=LowestNum(str, n); 
        a.push_back('\0');
        int c=0;
        for(int i=0;a[i]!='\0';i++)
        {
        	if(a[i]=='0' && c==0 )
        	{
        		continue;
			}
			else
			{
				c=1;
				cout<<a[i];
			}
			
		}
		cout<<"\n";
        }
    }
    return 0; 
} 

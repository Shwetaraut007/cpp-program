using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
	int n=4;
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=n;j++)
		{
		  if(j>=i)
			{
			  cout<<"*";
		    }
		  else
		    {
		    	cout<<" ";
			}  
		}
		cout<<endl;
	}
}

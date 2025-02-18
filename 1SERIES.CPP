using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
  int f=0,s=1,t,n,i;
  cout<<"enter number";
  cin>>n;
  cout<<"series";
  cout<<f<<"\t"<<s;
  for(i=1;i<n;i++)
  {
  	t=f+s;
	cout<<"\t"<<t;
	f=s;
	s=t;
  }
}

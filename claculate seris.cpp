using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
  int i,n,s=0;
  cout<<"enter limit";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	cout<<i*i<<"+";
  	s=s+(i*i);
  }
  cout<<"\b="<<s;

}



using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
  int a[10],n,i;
  cout<<"enter number";
  cin>>n;
  while(n>0)
  {
  	a[i++]=n%2;
  	n=n/2;
  }
  cout<<"binary no";
  for(i=i-1;i>=0;i--)
  {
  	cout<<a[i];
  }
}

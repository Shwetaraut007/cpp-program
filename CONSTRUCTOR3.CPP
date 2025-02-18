 using namespace std;
#include<iostream>
void sort(int a[100],int n)
{

}
void sort(float a[100],int n)
{

}

int main()
{
   int a[100],i,n;
   float b[100];
   cout<<"Enter limit of int array:";
   cin>>n;
   cout<<"Enter n numbers:";
   for(i=0;i<n;i++)
     cin>>a[i];
   sort(a,n);

   cout<<"Enter limit of float array:";
   cin>>n;
   cout<<"Enter n numbers:";
   for(i=0;i<n;i++)
     cin>>b[i];
   sort(b,n);
}

using namespace std;
#include<iostream>
class demo
{
	public:
		void square(int n)
		{
			int s=n*n;
			cout<<"square of no="<<s<<endl;
		}
	 void leap(int y)
	 {
	 	if(y%4==0)
	 	   cout<<"leap year"<<endl;
	 	else
	 	   cout<<"not leap year";
	 }
};

int main()
{
	demo ob;
	ob.square(5);
	ob.leap(2024);
}

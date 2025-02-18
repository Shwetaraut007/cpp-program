 using namespace std;
#include<iostream>
class Add
{
  public:
  	int a,b;
	Add()
	 {
	   cout<<"Enter two nos:";
	   cin>>a>>b;	
	   int c=a+b;
	   cout<<"Addition1="<<c<<endl; 	
	 }
	Add(int a,int b)
	 {
	 	this->a=a;
	 	this->b=b;
	   int c=a+b;
	   cout<<"Addition2="<<c<<endl; 	
	 }	
	Add(Add& ob)
	{
		int c=ob.a+ob.b;
		cout<<"Addition3="<<c<<endl;
	}
	Add(float a,float b)
	{
		float c=a+b;
		cout<<"Additrion4="<<c;
	}
};
int main()
{
	Add obj;
	Add ob(11,44);
	Add ob1(ob);
	Add ob3(11.44f,10.55f);
}


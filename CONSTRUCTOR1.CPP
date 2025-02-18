 using namespace std;

#include<iostream>

class Add

{

  public:

  	int a,b;

	Add(int a,int b)

	 {

	 	this->a=a;

	 	this->b=b;

	   int c=a+b;

	   cout<<"Addition1="<<c<<endl; 	

	 }	

	Add(Add& ob)

	{

		int c=ob.a+ob.b;

		cout<<"Addition2="<<c<<endl;

	}

};

int main()

{

	Add ob(11,44);

	Add ob1(ob);

}

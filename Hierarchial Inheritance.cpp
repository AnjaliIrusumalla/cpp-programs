#include<iostream>
using namespace std;
class data
{
	protected:
		int a,b;
	public:
		void getvalues()
		{
			cout<<"Enter a,b values:";
			cin>>a>>b;
		}
};
class add:public data
{
	protected:
		int addition;
	public:
		void getaddition()
		{
			getvalues();
			addition=a+b;
			cout<<"Addition of a and b is="<<addition<<endl;
		}
};
class mul:public data
{
	protected:
		int multi;
	public:
		void getmultiplication()
		{
			getvalues();
			multi=a*b;
			cout<<"Multiplication of a and b is="<<multi<<endl;
		}
};
main()
{
	add o1;
	o1. getaddition();
	mul o2;
	o2.getmultiplication();
}


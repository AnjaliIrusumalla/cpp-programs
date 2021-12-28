#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
};
class B:virtual public A
{
	protected:
		int c,d;
};
class C:virtual public A
{
	protected:
		int e,f;
};z
class D:public B,public C
{
	private:
		int g,h,i;
	public:
		void display()
		{
			cout<<"Enter a,b values:"<<endl;
			cin>>a>>b;
			i=a+b;
			cout<<"The addition of 2 numbers are:"<<i<<endl;
			cout<<"Enter c,d values:";
			cin>>c>>d;
			g=c-d;
			cout<<"The subtraction of 2 numbers are:"<<g<<endl;
			cout<<"Enter e,f values:";
			cin>>e>>f;
			h=e*f;
			cout<<"The multiplication of 2 numbers are:"<<h<<endl;
					
		}
};
main()
{
	D o1;
	o1.display();
	
}


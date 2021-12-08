#include<iostream>
using namespace std;
class details
{
	protected:
		string name;
		int number;
	public:
		void getdetails()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter number:";
			cin>>number;
			
		}
};
class marks:public details
{
	protected:
		int intermarks;
	public:
		void getmarks()
		{
			cout<<"Enter intermarks:";
			cin>>intermarks;
			
		}
		void display()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Number="<<number<<endl;
			cout<<"intermarks="<<intermarks<<endl;
		}
};
class emarks
{
	protected:
		int eamcetmarks;
	public:
		void getmarks1()
		{
			cout<<"Enter eamcet marks:";
			cin>>eamcetmarks;
		}
		void displaymarks()
		{
			cout<<"Eamcetmarks="<<eamcetmarks<<endl;
		}
};
class finalmarks:public emarks,public marks
{
	protected:
		int total1,total2,ftotal;
	public:
		void getfinalmarks()
		{
			total1=intermarks*0.25;
			total2=eamcetmarks*0.75;
			ftotal=total1+total2;
        }
        void total()
        {
        	cout<<"ftotal="<<ftotal;
		}
};
main()
{
	finalmarks o1;
	o1.getdetails();
	o1.getmarks();
	o1.getmarks1();
	o1.getfinalmarks();
	o1.display();
	o1.displaymarks();
	o1.total();
}



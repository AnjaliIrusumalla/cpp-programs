#include<iostream>
using namespace std;
class details
{
	protected:
		string name,number,branch;
};
class academics
{
	protected:
		float cgpa;
};
class grades:public details,public academics
{
	public:
		void getdata()
		{
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter number:";
			cin>>number;
			cout<<"Enter branch:";
			cin>>branch;
			cout<<"Enter cgpa:";
			cin>>cgpa;
			display();
			if(cgpa>=8.0)
			{
				cout<<"Grade=A";
			}
			else if(cgpa>=7.0 && cgpa<8.0)
			{
				cout<<"Grade=B";
			}
			else
			{
				cout<<"Fail";
			}
		}
		void display()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Number="<<number<<endl;
			cout<<"branch="<<branch<<endl;
			cout<<"cgpa="<<cgpa<<endl;
		}
};
main()
{
	grades o1;
	o1.getdata();
}


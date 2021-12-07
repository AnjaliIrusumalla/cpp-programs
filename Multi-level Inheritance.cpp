#include<iostream>
using namespace std;
class details
{
	protected:
		string name,number;
};
class marks:public details
{
	protected:
		int s1,s2,s3,s4,s5;
};
class totavg:public marks
{
	protected:
		int total;
		float avg;
	public:
		void getdata()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter number:";
			cin>>number;
			cout<<"Enter marks for all 5 subjects:";
			cin>>s1>>s2>>s3>>s4>>s5;
			total=s1+s2+s3+s4+s5;
			avg=(total)/5;
		}
		void displaydata()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Number="<<number<<endl;
			cout<<"s1="<<s1<<endl;
			cout<<"s2="<<s2<<endl;
			cout<<"s3="<<s3<<endl;
			cout<<"s4="<<s4<<endl;
			cout<<"s5="<<s5<<endl;
			cout<<"Total="<<total;
			cout<<"Average="<<avg;
		}
};
main()
{
	totavg o1;
	o1.getdata();
	o1.displaydata();
}

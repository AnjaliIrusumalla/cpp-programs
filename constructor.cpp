#include<iostream>
using namespace std;
class distance
{
	private:
		int feet;
		int inches;
	public:
		distance(){}
		distance(int f,int i)
		{
			feet=f;
			inches=i;
		}
		void get_distance()
		{
			cout<<"distance is feet="<<feet<<",inches="<<inches
			void add(distance &d1,distance &d2)
			{
				feet=d1.feet+d2.feet;
				inches=d1.inches+d2.inches;
				feet=feet+(inches%12);
				inches=inches%12;
			}
			~distance()
			{
				cout<<"distance object destroyed"<<end 1;
			}
		};
		int main()
		{
		int f1,in1,f2,in2
		cout<<"enter feet:";
		cin>>f1;
		cout<<"enter inches:";
		cin>>in1;
		cout<<"enter feet:";
		cin>>f2;
		cout<<"enter inches:";
		cin>>in2;
		distance d1(f1,in1);
		distance d2(f2,in2)
	    distance d3;
		d3.add(d1,d2);
		d3.get_distance()
		return0;

		      
		



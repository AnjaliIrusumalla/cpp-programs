#include<iostream>
using namespace std;
class sum
{
	private:
		int sum,a,b,s1;
		public:
			void getvalues()
			{
				cout<<"Enter the values of a and b";
				cin>>a>>b;
			}
			void calculatesum()
			{
				s1=a+b;
			}
			void printsum()
			{
				cout<<"The sum of"<<a<<"and"<<b<<"is"<<s1;
			}
};
main()
{
	sum s1;
	s1.getvalues();
	s1.calculatesum();
	s1.printsum();
}

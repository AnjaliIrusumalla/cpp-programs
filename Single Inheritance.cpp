#include<iostream>
using namespace std;
class A
{
	protected:
		char name[10];
		int age;
		
};
class B:public A
{
	public:
		float h;
		int w;
		void get_data()
		{
			cout<<"Enter name and age:";
			cin>>name>>age;
			cout<<"\nEnter weight and height:";
			cin>>w>>h;
		}
		void show()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Weight:"<<w<<endl;
			cout<<"Height:"<<h<<endl;
		}
};
int main()
{
	B C;
	C.get_data();
	C.show();
}

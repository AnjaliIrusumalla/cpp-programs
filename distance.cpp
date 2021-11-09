#include<iostream>
#include<conio.h>
using namespace std;
class DTSTANCE
{
	private:
		int feet;
		int inch;
	public:
		void get()
		{
			feet=0;
			inch=0;
		}
	    void get(int a,int b)
		{
			feet=a;
			inch=b;
		}
void show()
		{
			cout<<feet<<"and"<<inch<<endl;
		}
		void add( DTSTANCE d1, DTSTANCE d2)
		{
			inch=d1.inch+d2.inch;
			feet=inch/12;
			feet+=d1.feet+d2.feet;
			inch=inch%12;
		}
};
int main()
{
	  DTSTANCE d1;
	 d1.get();
	  DTSTANCE d2;
	  d2.get(10,20);
	  d1.add(d1,d2);
	  cout<<"the sum of d1 and d2 is:";
	  d1.show();
	  getch();
	  return 0;
}

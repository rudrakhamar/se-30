#include<iostream>
using namespace std;

class A{
	public:
		string a,b,c;
		Add()
		{
			cout<<"Enter String 1: ";
			cin>>a;
			
			cout<<"Enter String 2: ";
			cin>>b;
		}
		Add(int k)
		{
			c=a+b;
			cout<<"\n"<<c;
		}
};
main()
{
	A obj;
	obj.Add();
	obj.Add(4);
}

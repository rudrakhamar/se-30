#include<iostream>
using namespace std;
class A{
	private:
		int a=4,b=6;
	friend class B;
};

class B{
	public:
	swap(A& t)
	{
		cout<<"Before swap: "<<t.a<<"\t"<<t.b;
		t.a=t.a+t.b;
		t.b=t.a-t.b;
		t.a=t.a-t.b;
		cout<<"\nAfter  swap: "<<t.a<<"\t"<<t.b;
	}
};	

main()
{
	A obk;
	B obj;
	obj.swap(obk);
}

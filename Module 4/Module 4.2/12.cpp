#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		public:
			input()
			{
				cout<<"Enter First Number: ";
				cin>>a;
				
				cout<<"Enter Second Number: ";
				cin>>b;
			}
	friend class B;
};

class B{
	public:
	max(A& t)
	{
		if(t.a>t.b) cout<<"\nMax Number is: "<<t.a;
		else cout<<"\nMax Number is: "<<t.b;
	}
};	

main()
{
	A obk;
	obk.input();
	B obj;
	obj.max(obk);
}

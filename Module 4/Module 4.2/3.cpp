#include<iostream>
using namespace std;

class Operation{
	public:
		float a,b;
		get()
		{
			 cout << "Enter two numbers: ";
             cin >> a >> b;
		}
		multi()
		{
			cout << "\nThe multiplication of " << a << " and " << b << " is: " <<a*b<< endl;
		}
		cubic()
		{
			cout<<"The Cube of "<<a<<" is: "<<a*a*a<<endl;
			cout<<"The Cube of "<<b<<" is: "<<b*b*b<<endl;
			
		}
	
};

main()
{
	Operation obj;
	obj.get();
	obj.multi();
	obj.cubic();
	
}

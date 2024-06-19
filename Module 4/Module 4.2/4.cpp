#include<iostream>
using namespace std;

class Cal{
	public:
		float a,b;
		Cal()   //This is a constructor
		{
			cout<<"Enter Two Numbers: ";
			cin>>a>>b;
		}
		
		cal()
		{
			cout<<"Additon of "<<a<< " and "<<b<<" is: "<<a+b<<endl;
			cout<<"Substraction of "<<a<< " and "<<b<<" is: "<<a-b<<endl;
			cout<<"Multiplication of "<<a<< " and "<<b<<" is: "<<a*b<<endl;
			cout<<"Division of "<<a<< " and "<<b<<" is: "<<a/b<<endl;
			
		}
	
};

main()
{
	Cal obj;  
	obj.cal();
	
}

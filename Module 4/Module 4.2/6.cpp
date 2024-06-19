#include<iostream>
using namespace std;

class Student
{
	public:
		int roll;
		info()
		{
			cout<<"Enter Your Roll No: ";
			cin>>roll; 	
		}
	
};

class Test: public Student
{
	public:
		int h,e;
		info1()
		{
			cout<<"Enter Your marks  in Hindi: ";
			cin>>h;
			
			cout<<"Enter Your Marks in English: ";
			cin>>e;
	    }
};

class Result:public Test
{
	public:
		int t;
		info2()
		{
			cout<<"Enter Total Marks: ";
			cin>>t;
		}
		
		display()
		{
			cout<<"\nTest Result: \nRoll Number: "<<roll;
			cout<<"\nHindi: "<<h;
			cout<<"\nEnglish: "<<e;
			cout<<"\nTotal Marks: "<<t;
		}
};

main()
{
	Result obj;
	obj.info();
	obj.info1();
	obj.info2();
	obj.display();
}

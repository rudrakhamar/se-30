#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
};
class Student: public Person{
	public:
		int percentage,total,subjects;
		input()
		{
			cout<<"Enter Student Data: \nName: ";
			cin>>name;
			
			cout<<"Age: ";
			cin>>age;
			
			cout<<"Enter Total Marks: ";
			cin>>total;
			
			cout<<"Enter No of Subjects: ";
			cin>>subjects;
		}
		display()
		{
			percentage =total/subjects;
			cout<<"\n\nStudent Data: \nName: "<<name;
			cout<<"\nAge: "<<age;
			cout<<"\nPercentage: "<<percentage;
		}
};
class Teacher: public Person{
	public:
	int salary,a;
	string n;
		input1()
		{
			cout<<"Enter Teacher Data: \nName: ";
			cin>>n;
			
			cout<<"Age: ";
			cin>>a;
			
			cout<<"Enter Salary: ";
			cin>>salary;
		}
		display1()
		{
			cout<<"\n\nTeacher Data: \nName: "<<n;
			cout<<"\nAge: "<<a;
			cout<<"\nSalary: "<<salary;
		}
};
main()
{
	Student obj;
	Teacher obk;
	obj.input();
	obk.input1();
	obj.display();
	obk.display1();
}

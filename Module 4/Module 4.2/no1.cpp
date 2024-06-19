#include<iostream>
using namespace std;

class Calculator
{
	public:
    	add()
		{
			int a,b;
			cout<<"\nEnter Number 1: ";
			cin>>a;
			
			cout<<"Enter Number 2: ";
			cin>>b;
			
			cout<<"Addition: "<<a+b<<endl<<endl;
			
		}
		
		sub()
		{
			int a,b;
			cout<<"\nEnter Number 1: ";
			cin>>a;
			
			cout<<"Enter Number 2: ";
			cin>>b;
			
			cout<<"Substraction: "<<a-b<<endl<<endl;
			
		}
		multi()
		{
			int a,b;
			cout<<"\nEnter Number 1: ";
			cin>>a;
			
			cout<<"Enter Number 2: ";
			cin>>b;
			
			cout<<"Multiplication: "<<a*b<<endl<<endl;
			
		}
		
		division()
		{
			int a,b;
			cout<<"\nEnter Number 1: ";
			cin>>a;
			
			cout<<"Enter Number 2: ";
			cin>>b;
			
			cout<<"Division: "<<a/b<<endl<<endl;
			
		}
	
};

main()
{
	
	for(int i=0;i<=9999;i++)
	{
	int choice,end=0;
	
	cout<<"Press 1 for addition\nPress 2 for substraction \nPress 3 for multiplication\nPress 4 for division \nPress 5 to Exit \n\nEnter Your Choice(1-5): ";
	cin>>choice;
	
	Calculator obj;
	
	switch (choice)
	{
	case 1:
	{
		obj.add();
		break;
	}
	case 2:
	{
		obj.sub();
		break;
	}
	case 3:
	{
		obj.multi();
		break;
	}
	
	case 4:
		obj.division();
		break;
		
	
	case 5:
			end=1;
			break;
			
	default:
	{
		cout<<"Your Choice Is Invalid."<<endl<<endl;
		break;
	}
    }
    
    if(end==1)
    {
    	cout<<"Thanks For Using My Calculator.";
    	break;
	}
    }
    
}

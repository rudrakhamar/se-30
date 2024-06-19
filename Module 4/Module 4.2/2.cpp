#include<iostream>
using namespace std;

class Bank
{
	public:
		string name="h",type;
		double account_number, balance=0;
		
		info() //new account registeration na maate
		{
			cout<<"\nEnter Your Name: ";
			cin>>name;
			
			cout<<"Enter Your Account Number: ";
			cin>>account_number;
			
			cout<<"What is Your Account Type: ";
			cin>>type;
			
			cout<<"Enter your first deposite amount : ";
			cin>>balance;
			
			cout<<""<<endl;
		}
		depo()   //account ma paisa deposit karva maate
		{
			double a;
			cout<<"\nEnter Your Deposite Amount: ";
			cin>>a;
			
			balance=balance+a;
			
			cout<<"This is the  Updated balance of your account : "<<balance;
			cout<<""<<endl<<endl;
		}
		with()   //account thi paisa withdraw  maate
		{
			double b;
			
			cout<<"\nYour Account Balance Is: "<<balance;
			
			cout<<"\nEnter Your Withdraw Amount: ";
			cin>>b;
			
			balance=balance-b;
			
			cout<<"Your Remaining Account Balance Is: "<<balance;
			cout<<""<<endl<<endl;
		}
		display()    //bank account ni total detail display karva maate
		{
			if(name=="h")
			{
				cout<<"Please open a Bank Account First: ";
			}
			else
			{
			cout<<"Name: "<<name;
			cout<<"\nYour Updated Account Balance Is: "<<balance;
		    }
			cout<<""<<endl<<endl;
		}
};

main()
{
	Bank obj;
	
	for(int i=0;i<=9999;i++)  
	{
		int choice,end=0;
	
	cout<<"Press 1 to open a new Account \nPress 2 for deposite\nPress 3 for withdraw\nPress 4 to display  account info \nEnter Your Choice(1-4): ";
	cin>>choice;
	
 switch (choice)      //switch case choice na hisab thi function call kare
	{
	case 1:
		obj.info();
		break;
	
	case 2:
		obj.depo();
		break;
	
	case 3:
		obj.with();
		break;
	
	case 4:
		obj.display();
		break;
	
			
	default:
	{
		cout<<"This choice is invalid."<<endl<<endl;
		break;
	}
    }
    
    if(end==1)
    {
    	cout<<"Thankyou for using our system";
    	break;
	}
    }
}

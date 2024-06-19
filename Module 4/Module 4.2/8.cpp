#include<iostream>
using namespace std;

class A{
	public:
		int i,s;
		int a[256],b[256];
		Add()
		{
			cout<<"Enter Size of Matrix: ";
	        cin>>s;
			
			cout<<"Enter Matrix 1: ";
			for(i=0;i<s;i++)
			{
				cin>>a[i];
			}
			cout<<"Enter Matrix 2: ";
			for(i=0;i<s;i++)
			{
				cin>>b[i];
			}
		}
		
		Add(int k)
		{   int c[256];
			for(i=0;i<s;i++)
			{
				c[i]=a[i]+b[i];
			}
			
			cout<<"\nMatrix 1: ";
			for(i=0;i<s;i++)
			{
				cout<<a[i]<<" ";
			}
			
			cout<<"\nMatrix 2: ";
			for(i=0;i<s;i++)
			{
				cout<<b[i]<<" ";
			}
			
			cout<<"\nMatrix 1 + Matrix 2: ";
			for(i=0;i<s;i++)
			{
				cout<<c[i]<<" ";
			}
		}
};
main()
{
	A obj;
	obj.Add();
	obj.Add(4);
}

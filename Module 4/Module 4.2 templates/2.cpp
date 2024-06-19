#include<iostream>
using namespace std;

template<typename T>
T My(T a[])
{   cout<<"Before Sorting: ";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{float temp;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
				
			}
		}
	}
	cout<<"\nAfter  Sorting: ";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}	
}
main()
{
	int iarr[]={4,65,69,17,8};
	float farr[]={5.26,645.56,8.556,412.56,556};
	char carr[] = {'e', 'b', 'd', 'a', 'c'};
	My(iarr);
	cout<<endl<<endl;
	My(farr);
	cout<<endl<<endl;
	My(carr);
}

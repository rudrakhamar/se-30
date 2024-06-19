#include<iostream>
using namespace std;

template<typename T>
T my( T x,T y)
{
	cout<<"Before Swap: "<<x<<"\t"<<y;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	cout<<"\nBefore Swap: "<<x<<"\t"<<y<<endl<<endl;
}

main()
{
	my(3,6);
	my(4.55,5.65);
}

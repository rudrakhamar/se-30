#include<iostream>
using namespace std;

class A{
	public:
		Area()
		{
			int l=5,w=6;
			cout<<"Area of Rectangle is: "<<l*w;
		}
		Area(int b,int h)
		{
			cout<<"\nArea of Triangle is: "<<0.5*b*h;
		}
		Area(float r, float k)
		{
			cout<<"\nArea of Circle is: "<<k*r*r;
		}
};
main()
{
	A obj;
	obj.Area();
	obj.Area(4,6);
	obj.Area(11,3.14);
}

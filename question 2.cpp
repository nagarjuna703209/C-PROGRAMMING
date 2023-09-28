#include<iostream>
using namespace std;
int main()
{
	int n,h,w,side,area;
	cout<<"enter the shape";
	cin>>n;
	if(n==1)
	{
		cout<<"enter the height";
		cin>>h;
		cout<<"enter the width";
		cin>>w;
		area=h*w;
		cout<<"the area of rectangle is"<<area;
	}
	else
	cout<<"enter the side";
	cin>>side;
	area=3*side;
	cout<<"the area of triangle is:"<<area;

	return 0;
}

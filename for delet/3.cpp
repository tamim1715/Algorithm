#include<iostream>
using namespace std;
int main()
{
	int h,t;
	double c;
	cout<<"Hardness: ";
	cin>>h;
	cout<<"Carbon content: ";
	cin>>c;
	cout<<"Tensile strength: ";
	cin>>t;
	if(h>50&&c<0.7&&t>5600)
	{
		cout<<"Grade "<<10<<endl;
	}
	else if(h>50&&c<0.7&&t<=5600)
	{
		cout<<"Grade "<<9<<endl;
	}
	else if(h<=50&&c<0.7&&t>5600)
	{
		cout<<"Grade "<<8<<endl;
	}
	else if(h>50&&c>=0.7&&t>5600)
	{
		cout<<"Grade "<<7<<endl;
	}
	else if(h>50||c<0.7||t>5600)
	{
		cout<<"Grade "<<6<<endl;
	}
	else
	{
		cout<<"Grade "<<5<<endl;
	}
	return 0;
}

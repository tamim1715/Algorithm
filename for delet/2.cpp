#include<iostream>
using namespace std;
int main()
{
	char c;
	int a;
	cin>>c;
	a=c;
	if(a>=65&&a<=90)
	{
	    cout<<"capital letter"<<endl;
	}
	else if(a>=97&&a<=122)
	{
		cout<<"small letter"<<endl;
	}
	else if(a>=48&&a<=57)
	{
		cout<<"digit"<<endl;
	}
	else if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
	{
		cout<<"special symbol"<<endl;
	}
	return 0;
}

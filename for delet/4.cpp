#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x;
	cin>>x;
	double sum=0.0;
    sum+=(x-1)/x;
	for(int i=2; i<=7; i++)
	{
		double p=0.5;
		int c=1;
		while(c<=i)
		{
			p*=(x-1)/x;
			c++;
		}
		sum+=p;
	}
	cout<<sum<<endl;
	return 0;
}

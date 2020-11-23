#include<iostream>
using namespace std;
int main()
{
    int n,p=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            cout<<"*";
        }
        for(int k=1; k<=p&&i!=1; k++)
        {
            cout<<" ";
        }
        for(int l=n; l>=i; l--)
        {
            if(i==1&&l==n)
            {
                continue;
            }
            cout<<"*";
        }
        cout<<endl;
        if(i!=1) p=p+2;
    }
    return 0;
}

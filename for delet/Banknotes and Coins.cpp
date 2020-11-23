
/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back
#define pob pop_back

#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)

#define L length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))

#define pii pair<int, int>
#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1000000007

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    double x;
    cin>>x;
    int p=x;
    int q=(x-p)*100;
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;

    a=p/100;
    p=p%100;

    b=p/50;
    p=p%50;

    c=p/20;
    p=p%20;

    d=p/10;
    p=p%10;

    e=p/5;
    p=p%5;

    f=p/2;
    p=p%2;

    g=q/50;
    q=q%50;

    h=q/25;
    q=q%25;

    i=q/10;
    q=q%10;

    j=q/5;
    q=q%5;

    cout<<"NOTAS:"<<endl;
    cout<<a<<" nota(s) de R$ 100.00"<<endl;
    cout<<b<<" nota(s) de R$ 50.00"<<endl;
    cout<<c<<" nota(s) de R$ 20.00"<<endl;
    cout<<d<<" nota(s) de R$ 10.00"<<endl;
    cout<<e<<" nota(s) de R$ 5.00"<<endl;
    cout<<f<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<p<<" moeda(s) de R$ 1.00"<<endl;
    cout<<g<<" moeda(s) de R$ 0.50"<<endl;
    cout<<h<<" moeda(s) de R$ 0.25"<<endl;
    cout<<i<<" moeda(s) de R$ 0.10"<<endl;
    cout<<j<<" moeda(s) de R$ 0.05"<<endl;
    cout<<q<<" moeda(s) de R$ 0.01"<<endl;





    return 0;
}


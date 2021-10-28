#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<set>
#include<queue>


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

struct node{
   int roll;
   node *next;
};



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n,m;
    cin>>n>>m;
    int t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>t[i][j];
    }
    int cnt;
    cout<<"?th smallest value: ";
    cin>>cnt;
    int start=0,end=n*m-1,ans;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(t[mid/m][mid%m]==cnt)
        {
            ans=t[mid/m][mid%m];
            break;
        }
        if(t[mid/m][mid%m]<cnt)
        {
            start=mid+1;
        }
        else end=mid-1;


    }
    cout<<ans<<endl;


    return 0;
}


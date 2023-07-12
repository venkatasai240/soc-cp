#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define  long long



#define print(x) for(auto it:x) cout<<it<<" ";
#define dbg(x) cerr<<#x<<" :: "<<x<<endl;
#define dbg2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<endl;



const int INF = 1e9;
const int MOD = 1e9 + 7; 
const double pi = acos(-1);
int power(int a,int b,int m=MOD)
{int ans=1;while(b>0){if(b&1)ans=(ans*a)%m;a=(a*a)%m;b>>=1;}
return ans;}
int dir[]={-1, 0, 1, 0, -1};
int dx[]={1,1,0,-1,-1,-1, 0, 1};
int dy[]={0,1,1, 1, 0,-1,-1,-1};

const int N = 1e5+1;

void solve()
{
    int i,j,n,x,ans=0;
    cin>>n;
    vector<int> bits(20,0); //0 1.......20
    for(i=0;i<n;i++)
    {
        cin>>x;
        for(j=0;j<20;j++)
        if(x&(1<<j))
        bits[j]++;
    }
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<20;j++)
        {
            if(bits[j]>0)
            {
                x=x|(1<<j);
                bits[j]--;
            }
        }
        ans+=x*x;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    t=1;
    //cin>>t;
    while(t--)
        solve();
}
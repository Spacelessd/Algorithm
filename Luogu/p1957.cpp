#include<bits/stdc++.h>
//#define int long long//__int128
#define mmst0(x) memset(x,0,sizeof(x))
#define mmst3f(x) memset(x,0x3f,sizeof(x))
#define pb(x) emplace_back(x)
#define mkp(x, y) make_pair(x, y)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef long double rld;
typedef unsigned long long ull;

const rld eps = 1e-6;
const int INF=0x3f3f3f3f;//0x3f3f3f3f3f3f3f3f;//LLINF
const int MAXN=(int)1e5+3;

//int read(){int s=0,w=1;char ch=getchar();while(!isdigit(ch)){if(ch=='-')w=-1;ch=getchar();}while(isdigit(ch)){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();} return s*w;}
//void prt(int x){if(x<0){putchar('-');x=-x;}if(x>9)prt(x/10);putchar((char)(x%10+'0'));}

int n;
char ch;

void work()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        string st,res;
        stringstream io;
        int a=0,b=0,ans=0;
        if(!(cin>>a>>b))
        {
            cin.clear();
            cin>>ch>>a>>b;
        }
        io<<a; io>>res; io.clear();
        if(ch=='a')
        {
            ans=a+b;
            res+='+';
        }
        if(ch=='b')
        {
            ans=a-b;
            res+='-';
        }
        if(ch=='c')
        {
            ans=a*b;
            res+='*';
        }
        io<<b; io>>st; io.clear();
        res+=(st+'=');
        io<<ans; io>>st; io.clear();
        res+=st;
        cout<<res<<endl<<res.size()<<endl;
    }
    return;
}

signed main()
{
    //ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); //freopen(".in", "r", stdin);//freopen(".out", "w", stdout);
    signed T=1;//(int)read();
    for(signed Case=1; Case<=T; Case++)
    {
        //printf("Case %d: ",Case);
        //while(cin>>n)
        work();
    }
    return 0;
}

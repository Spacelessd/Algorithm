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
const int N=(int)1e5+3;

int read(){int s=0,w=1;char ch=getchar();while(!isdigit(ch)){if(ch=='-')w=-1;ch=getchar();}while(isdigit(ch)){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();} return s*w;}
//void prt(int x){if(x<0){putchar('-');x=-x;}if(x>9)prt(x/10);putchar((char)(x%10+'0'));}

int n,m,ans;
priority_queue<int> q;
vector<int> b;

void work()
{
    n=read(); m=read();
    for(int i=0;i<n;i++) q.push(read());
    for(int i=0;i<m;i++) b.pb(read());
    sort(b.begin(),b.end());
    for(int i=0;i<m;i++)
    {
        while(!q.empty())
        {
            int cur=q.top();q.pop();
            if(b[i]<=cur)
            {
                cur-=b[i];
                if(cur>0)q.push(cur);
                ans++;
                break;
            }
        }
        if(q.empty()) break;
    }
    cout<<ans<<endl;
    return;
}

signed main()
{
    //ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); //freopen(".in", "r", stdin);//freopen(".out", "w", stdout);
    signed T=1;//(int)read();
    for(signed Case=1; Case<=T; Case++)
    {
        //printf("Case %d: ",Case);
        work();
    }
    return 0;
}

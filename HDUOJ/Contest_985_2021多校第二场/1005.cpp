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
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;//0x3f3f3f3f3f3f3f3f;//LLINF
const int MAXN=(int)1e5+3;

int read(){int s=0,w=1;char ch=getchar();while(!isdigit(ch)){if(ch=='-')w=-1;ch=getchar();}while(isdigit(ch)){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();} return s*w;}
//void prt(int x){if(x<0){putchar('-');x=-x;}if(x>9)prt(x/10);putchar((char)(x%10+'0'));}

string str;

long long ksm(long long x,long long y,long long o)//快速幂
{
    if(x==0) return 0; 
    long long ret=1;
    for(;y;y>>=1)
    {
        if(y&1) ret=(ret*x)%o;
        x=(x*x)%o;
    }
    return (ret%o);//最后%一下 
} 

void work()
{
    int n,r=0;
    cin>>n>>str;
    if(str.size()==1){
        cout<<1<<endl;
        return ;
    }
    for(int i=1;i<(int)str.size();i++){
        if(str[i]==str[i-1]) r=i;
        else break;
    }
    ///cout<<r<<endl;
    cout<<ksm(2,r,MOD)<<endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); //freopen(".in", "r", stdin);//freopen(".out", "w", stdout);
    signed T;cin>>T;
    //signed T=(int)read();
    for(signed Case=1; Case<=T; Case++)
    {
        //printf("Case %d: ",Case);
        //while(cin>>n)
        work();
    }
    return 0;
}

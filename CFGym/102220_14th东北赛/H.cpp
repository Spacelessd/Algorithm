#include<bits/stdc++.h>
// #include<bits/extc++.h>
// #define int long long//__int128
#define mmst0(x) memset(x,0,sizeof(x))
#define mmst3f(x) memset(x,0x3f,sizeof(x))
#define si(x) scanf("%d",&x)//scanf("%lld",&x) // When define int ll
#define pb(...) emplace_back(__VA_ARGS__)
#define sz(x) ((int)(x.size()))
#define PII pair<int,int>
#define PCI pair<char,int>
#define PIS pair<int,string>
#define mkp(...) make_pair(__VA_ARGS__)
#define fi first
#define se second
#define lowbit(x) (-x&x)
#define YESS puts("Yes")
#define NOO puts("No")
using namespace std;
// using namespace __gnu_pbds; // If using pbds don't using std!
typedef long long ll;
// typedef long double rld; // use double pls!
typedef unsigned long long ull;

const double eps=1e-6;
const int INF=0x3f3f3f3f;//0x3f3f3f3f3f3f3f3f; // LLINF
const int MAXN=(int)1e6+3,MOD=(int)1e9+7;

inline int rnd(int x) {mt19937 mrand(random_device{}()); return mrand()%x;};
inline char nc(){static char buf[100000],*p1=buf,*p2=buf;return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;}
inline int read(){int s=0,w=1;char ch=nc();while(!isdigit(ch)){if(ch=='-')w=-1;ch=nc();}while(isdigit(ch)){s=(s<<3)+(s<<1)+(ch^48);ch=nc();} return s*w;}
//inline int read() {int x;si(x);return x;} // FAKE QUICK READ,JUST FOR DEBUG
// inline void read(int &x){char ch=nc();x=0;while (!(ch>='0'&&ch<='9')) ch=nc();while (ch>='0'&&ch<='9') x=(x<<3)+(x<<1)+ch-48,ch=nc();} // 根据参数个数自动选择
// void prt(int x){if(x<0){putchar('-');x=-x;}if(x>9)prt(x/10);putchar((char)(x%10+'0'));}

int num[MAXN];
char s[MAXN],c[MAXN];

bool chk(int x) {
    while(x>1) {
        if(x%16) {
            return false;
        }
        x/=16;
    }
    return true;
}

inline void work(signed CASE=1,bool FINAL_CASE=false) {
    while(~scanf("%s",s+1)) {
        int now=1,cnt=0,pos=0;
        int len=strlen(s+1); s[len+1]=0x7f;
        for(int i=2;i<=len+1;i++) {
            if(s[i]!=s[i-1]) {
                c[cnt]=s[i-1];
                num[cnt++]=now;
                now=1;
            } else {
                now++;
            }
        }
        c[cnt]=0x7f;
        for(int i=0;i<cnt;i++) {
            if(num[i]==1) {
                pos=i;
                if(c[i]>c[i+1]) {
                    break;
                }
            }
            if(num[i]==2 || chk(num[i])) {
                pos=i;
            }
        }
        num[pos]--;
        for(int i=0;i<cnt;i++) {
            if(num[i]) {
                printf("%c",c[i]);
                if(num[i]!=1)
                    printf("%X",num[i]);
                }
        }
        puts("");
    }
    return;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); //freopen(".in", "r", stdin);//freopen(".out", "w", stdout);
    signed T=1;//(signed)read();//scanf("%d",&T);//cin>>T;
    for(signed CASE=1; CASE<=T; CASE++) { //
        //printf("Case #%d: ",CASE); //printf("Case %d: ",CASE); //printf("Case #%d: \n",CASE); //printf("Case %d: \n",CASE);
        work(CASE,CASE==T);
        if(CASE!=T) {}
    }
    return 0;
}
#include<bits/stdc++.h>
//#include<bits/extc++.h>
#define int long long
//#define int __int128
#define ull unsigned long long
#define MMST(x,y) memset(x,y,sizeof(x))

using namespace std;
//using namespace __gnu_pbds;

const int INF=0x3f3f3f3f;

int read(){char c;int num,f=1;while(c=(char)getchar(),!isdigit(c))if(c=='-')f=-1;num=(int)(c-'0');while(c=(char)getchar(),isdigit(c))num=num*10+(int)(c-'0');return num*f;}
void prt(int x){if(x<0){putchar('-');x=-x;}if(x>9)prt(x/10);putchar((char)(x%10+'0'));}

int todec(int x,int y)
{
    int ans=0,yx=1;
    while(x)
    {
        ans+=((x%10)*yx);
        yx*=y;
        x/=10;
    }
    return ans;
}
void work()
{
    int n=0;
    while(cin>>n)
    {
        int sum=0;
        while(n--)
        {
            int x=read();
            int y=read();
            sum+=todec(x,y);
        }
        cout<<sum<<endl;
        getchar();
    }
    return;
}

signed main()
{
    int T=1;//read();
    for(int Case=1;Case<=T;Case++)
    {
        //printf("Case #%d: ",Case);
        work();
    }
    return 0;
}

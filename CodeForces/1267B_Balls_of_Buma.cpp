#include<bits/extc++.h>
#include<bits/stdc++.h>
#define ll long long
//#define int long long
//#define int __int128
//#define int __uint128_t
#define ull unsigned long long
#define MMST(x,y) memset(x,y,sizeof(x))

using namespace std;
using namespace __gnu_pbds;

const int INF=0x3f3f3f3f;

int read(){char c;int num,f=1;while(c=(char)getchar(),!isdigit(c))if(c=='-')f=-1;num=(int)(c-'0');while(c=(char)getchar(),isdigit(c))num=num*10+(int)(c-'0');return num*f;}
void prt(int x){if(x<0){putchar('-');x=-x;}if(x>9)prt(x/10);putchar(x%10+'0');}

int l,r,cnt;
char s[300003];

void work()
{
    scanf("%s",s+1);
    l=1,r=(int)strlen(s+1);
    while(l<=r)
    {
        if(l==r || s[l]!=s[r])
        {
            prt(0);
            break;
        }
        cnt=2;
        while(s[l+1]==s[l] && l<r)cnt++,l++;
        while(s[r-1]==s[r] && r>l)cnt++,r--;
        l++,r--;
        if(r<l)
        {
            prt(cnt);
            break;
        }
        if(cnt<3)
        {
            prt(0);
            break;
        }
    }
    printf("\n");
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

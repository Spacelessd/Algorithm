#include <bits/stdc++.h>
//#include<bits/extc++.h>
#define int long long
//#define int __int128
#define ull unsigned long long
#define mmst0(x) memset(x, 0, sizeof(x))

using namespace std;
//using namespace __gnu_pbds;

const int INF = 0x3f3f3f3f;

int read()
{
    char c;
    int num, f = 1;
    while (c = (char)getchar(), !isdigit(c))
        if (c == '-')
            f = -1;
    num = (int)(c - '0');
    while (c = (char)getchar(), isdigit(c))
        num = num * 10 + (int)(c - '0');
    return num * f;
}
void prt(int x)
{
    if (x < 0)
    {
        putchar('-');
        x = -x;
    }
    if (x > 9)
        prt(x / 10);
    putchar((char)(x % 10 + '0'));
}

void work()
{
    int sn, s[1000], tsn, m, range, score, i, j;
    while (scanf("%d", &sn) != EOF)
    {
        range = 1;
        i = 0;
        while (scanf("%d%d", &tsn, &m), tsn || m)
        {
            if (tsn == sn)
                score = m;
            s[i++] = m;
        }
        for(j = 0; j < i; j++)
            if (s[j] > score)
                range++;
        printf("%d\n", range);
    }
}

signed main()
{
    //ios::sync_with_stdio(false);cin.tie(NULL);
    int T = 1; //read();
    for(int Case = 1; Case <= T; Case++)
    {
        //printf("Case #%d: ",Case);
        work();
    }
    return 0;
}

#include<bits/stdc++.h>
    typedef long long ll; struct Ostream_fwrite{char*buf,*p1,*pend;Ostream_fwrite(){buf=new char[1000000];p1=buf;pend=buf+1000000;}void out(char ch){if(p1==pend){fwrite(buf,1,1000000,stdout);p1=buf;}*p1++=ch;}void print(int x){static char s[15],*s1;s1=s;if(!x)*s1++='0';if(x<0)out('-'),x=-x;while(x)*s1++=x%10+'0',x/=10;while(s1--!=s)out(*s1);}void println(int x){static char s[15],*s1;s1=s;if(!x)*s1++='0';if(x<0)out('-'),x=-x;while(x)*s1++=x%10+'0',x/=10;while(s1--!=s)out(*s1);out('\n');}void print(ll x){static char s[25],*s1;s1=s;if(!x)*s1++='0';if(x<0)out('-'),x=-x;while(x)*s1++=x%10+'0',x/=10;while(s1--!=s)out(*s1);}void println(ll x){static char s[25],*s1;s1=s;if(!x)*s1++='0';if(x<0)out('-'),x=-x;while(x)*s1++=x%10+'0',x/=10;while(s1--!=s)out(*s1);out('\n');}void print(char*s){while(*s)out(*s++);}void println(char*s){while(*s)out(*s++);out('\n');}void flush(){if(p1!=buf){fwrite(buf,1,p1-buf,stdout);p1=buf;}}~Ostream_fwrite(){flush();}}Ostream;inline void print(int x){Ostream.print(x);}inline void println(int x){Ostream.println(x);}inline void print(char x){Ostream.out(x);}inline void println(char x){Ostream.out(x);Ostream.out('\n');}inline void print(ll x){Ostream.print(x);}inline void println(ll x){Ostream.println(x);}inline void print(char*s){Ostream.print(s);}inline void println(char*s){Ostream.println(s);}inline void println(){Ostream.out('\n');}inline void flush(){Ostream.flush();}
    bool IOerror=0; inline char nc(){static char buf[100000],*p1=buf+100000,*pend=buf+100000;if(p1==pend){p1=buf;pend=buf+fread(buf,1,100000,stdin);if(pend==p1){IOerror=1;return-1;}}return*p1++;}inline bool blank(char ch){return ch==' '||ch=='\n'||ch=='\r'||ch=='\t';}inline void read(int&x){bool sign=0;char ch=nc();x=0;for(;blank(ch);ch=nc());if(IOerror)return;if(ch=='-')sign=1,ch=nc();for(;ch>='0'&&ch<='9';ch=nc())x=x*10+ch-'0';if(sign)x=-x;}inline void read(ll&x){bool sign=0;char ch=nc();x=0;for(;blank(ch);ch=nc());if(IOerror)return;if(ch=='-')sign=1,ch=nc();for(;ch>='0'&&ch<='9';ch=nc())x=x*10+ch-'0';if(sign)x=-x;}inline void read(char*s){char ch=nc();for(;blank(ch);ch=nc());if(IOerror)return;for(;!blank(ch)&&!IOerror;ch=nc())*s++=ch;*s=0;}inline void read(char&c){for(c=nc();blank(c);c=nc());if(IOerror){c=-1;return;}}
#define int long long
#define rep(i,a,b) for(int i(a);i<=(b);++i)
#define REP(i,a,b) for(int i(a);i>=(b);--i)
using namespace std;

const int N=2e5 +7;


signed main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	
    return 0;
}

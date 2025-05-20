#include <bits/stdc++.h>
using namespace std;
#define Free_Palestine int main()
#define ll long long
#define loop  \
    ll t;     \
    cin >> t; \
    while (t--)
#define TRUE while (true)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sortStr(word) sort(word.begin(), word.end())
#define sortArr(arr, n) sort(arr, arr + n)
#define ld long double
#define cot(word) cout << word << endl
#define cit(word) \
    int word;     \
    cin >> word
#define CHECK  \
    if (check) \
    {          \
        YES;   \
    }          \
    else       \
    {          \
        NO;    \
    }

void solve()
{
    string s;
    cin >> s;
    int res= (s[1] - '0') + ((s[0] - '0') * 10);
    if(res>0&&res<12){
        if(res<10){
            cout<<0<<res<<":"<<s[3]<<s[4]<<" AM"<<endl;
        }else{
            cout<<res<<":"<<s[3]<<s[4]<<" AM"<<endl;
        }
    }else{
        if(res==0){
            cout<<12<<":"<<s[3]<<s[4]<<" AM"<<endl;
        }
        else if(res==12){
            cout<<res<<":"<<s[3]<<s[4]<<" PM"<<endl;
        }
        else if(res-12 <10){
            cout<<0<<res-12<<":"<<s[3]<<s[4]<<" PM"<<endl;
        }else{
            cout<<res-12<<":"<<s[3]<<s[4]<<" PM"<<endl;
        }
    }
}
Free_Palestine
{
    loop
    {
        solve();
    }
    return 0;
}

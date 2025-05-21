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
    cin>>s;
    string ns="";
    for(int i = s.length()-1;i>=0;i--){
        if(s[i]=='q'){
            ns+='p';
        }else if (s[i]=='p'){
            ns+='q';
        }else{
            ns+='w';
        }
    }
    cot(ns);
}
Free_Palestine
{
    loop
    {
        solve();
    }
    return 0;
}

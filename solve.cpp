#include <bits/stdc++.h>
using namespace std;
#define Free_Palestine int main()
#define ll long long
#define ld long double
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
#define cot(word) cout << word << endl
#define cit(word) \
    ll word;     \
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
    string a;
    cin>>a;
    if(a[0] == '1' && a[1]=='0'){
        if(a.length() > 3){
            if(a[2]-'0' > 0){
                YES;
            }else{
                NO;
            }
        }else{
            if(a[2]-'0' >2){
                YES;
            }else{
                NO;
            }
        }
    }else{
        NO;
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

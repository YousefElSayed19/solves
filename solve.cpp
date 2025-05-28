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
    ll word;      \
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
    cit(m);
    cit(a);
    cit(b);
    cit(c);
    int s = 0;
    int seats = m * 2;
    if (a > m)
    {
        s += m;
        seats -= m;
    }else{
        s += a;
        seats -=a;
    }
    if (b > m)
    {
        s += m;
        seats -= m;
    }else{
        s += b;
        seats -= b;
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

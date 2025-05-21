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
    cit(a);
    cit(b);
    cit(c);
    int d1 = a - 1;
    int d2 = abs(b - c) + c - 1;
    int ans = 0;
    if (d1 <= d2){
        ans += 1;
    }
    if (d1 >= d2){
        ans += 2;
    }
    cot(ans);
}
Free_Palestine
{
    loop
    {
        solve();
    }
    return 0;
}

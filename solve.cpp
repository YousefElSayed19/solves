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
    cit(a);
    cit(b);
    cit(c);
    cit(d);
    ll r1= (b-a == 0 ? b : b-a);
    ll r2= (c-b == 0 ? c : c-b );
    ll r3= (d-c == 0 ? d : d-c);
    cout<<r1<<" "<<r2<<" "<<r3<<endl;
}
Free_Palestine
{
    loop
    {
        solve();
    }
    return 0;
}

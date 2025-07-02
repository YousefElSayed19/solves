#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846
#define Free_Palestine int main()
#define ll long long
#define ld long double
#define loop  \
    ll t;     \
    cin >> t; \
    while (t--)
#define TRUE while (true)
#define YES cout << "yes" << endl
#define NO cout << "no" << endl
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sortStr(word) sort(word.begin(), word.end())
#define sortArr(arr, n) sort(arr, arr + n)
#define reverseArr(arr, n) reverse(arr, arr + n)
// #define BS(arr,n,l) binary_search(arr, arr + n, l);
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
    cit(w);
    cit(h);
    if(w==h){
        cot("Square");
    }else{
        cot("Rectangle");
    }
}
 
Free_Palestine
{
    loop{
        solve();
    }
    return 0;
}
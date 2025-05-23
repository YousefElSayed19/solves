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
    cit(n);
    if(n==1){
        cot("##");
        cot("##");
    }else{
        forn(i,n){
            int c = 0 ;
            forn(j,n){
                if(c%2==0){
                    cout<<"##";
                }else{
                    cout<<"..";
                }
                c++;
            }
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

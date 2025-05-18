#include <bits/stdc++.h>
using namespace std;

#define Free_Palestine int main()
#define loop  \
    int t;    \
    cin >> t; \
    while (t--)
#define TRUE while (true)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sortStr(word) sort(word.begin(), word.end())
#define sortArr(arr, n) sort(arr, arr + n)
#define ll long long
#define ld long double
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
Free_Palestine
{
    loop{
        cit(n);
        cit(m);
        cit(k);
        int b[n];
        int c[m];
        forn(i,n){
            cin>>b[i];
        }
        forn(i,m){
            cin>>c[i];
        }
        int s =0;
        forn(i,n){
            forn(j,m){
                if(b[i]+c[j] <= k){
                    s++;
                }
            }
        }
        cot(s);
    }
    return 0;
}

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
        int e =0, o=0;
        forn(i,n){
            cit(num);
            if(num%2){
                o+=num;
            }else{
                e+=num;
            }
        }
        if(e>o){
            YES;
        }else{
            NO;
        }
    }
    return 0;
}

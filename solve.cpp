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
    loop
    {
        int cnt[3] = {};
        for (int i = 0; i < 9; i++) {
            char c;
            cin >> c;
            if (c != '?') {cnt[c - 'A']++;}
        }	
        for (int i = 0; i < 3; i++) {
            if (cnt[i] < 3) {cout << (char)('A' + i) << '\n';}
        }
    }
    return 0;
}

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
    char arr[3][3]={
        {'A','B','C'},
        {'C','A','B'},
        {'B','C','A'}
    };
    loop
    {
        string s[3];
        forn(i,3){
            cin>>s[i];
        }
        forn(i,3){
            forn(j,3){
                if(s[i][j]=='?'){
                    cot(arr[i][j]);
                    break;
                }
            }
        }
    }
    return 0;
}

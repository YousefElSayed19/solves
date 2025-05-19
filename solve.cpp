#include <bits/stdc++.h>
using namespace std;

#define Free_Palestine int main()
#define ll long long
#define loop  \
    ll t;    \
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
    int word;      \
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
        string s;
        cin>>s;
        int arr[7]={0};
        forn(i,n){
            arr[s[i]-65]++;
        }
        forn(i,m){
            forn(j,7){
                arr[j]--;
            }
        }
        int sum = 0;
        forn(i,7){
            if(arr[i]<0){
                sum+=abs(arr[i]);
            }
        }
        cot(sum);
    }
    return 0;
}

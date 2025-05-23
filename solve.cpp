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
    cit(k);
    int arr[n];
    forn(i,n){
        cin>>arr[i];
    }
    int sum=0;
    int c = 0;
    forn(i,n){
        if(arr[i]>=k){
            sum+=arr[i];
        }else if(arr[i]==0 && sum>0){
            sum--;
            c++;
        }
    }
    cot(c);
}
Free_Palestine
{
    loop
    {
        solve();
    }
    return 0;
}

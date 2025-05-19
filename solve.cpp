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
    ios::sync_with_stdio(false); cin.tie(0);
    loop{
        int n, x;
        cin >> n >> x;
        int prev = 0, ans = 0;
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            ans = max(ans, a - prev);
            prev = a;
        }
    }
        ans = max(ans, 2 * (x - prev));
        cout << ans << '\n';
    return 0;
}

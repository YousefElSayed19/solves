#include <bits/stdc++.h>

using namespace std;

#define Free_Palestine int main()
#define loop  \
    int t;    \
    cin >> t; \
    while (t--)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sortStr(word) sort(word.begin(), word.end())
#define sortArr(arr, n) sort(arr, arr + n)
#define ll long long
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
Free_Palestine
{
    loop{

        int n;
        cin >> n;

        vector<int> a(n);

        for (int &x : a) {
            cin >> x;
        }

        sort(a.begin(), a.end());

        int result = a[n - 1] - a[0];

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                result = min(result, a[j] - a[i]);
            }
        }

        cout << result << endl;

    }
}
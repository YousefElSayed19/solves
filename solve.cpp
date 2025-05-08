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
    string s;
    cin >> s;
    int sum = 0;
    char current = 'a';

    for (char c : s)
    {
        int diff = abs(c - current);
        sum += min(diff, 26 - diff);
        current = c;
    }

    cot(sum);
}

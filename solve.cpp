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

    cit(n);
    ld arr[n];
    int c = 1;
    int max = 0;
    forn(i, n)
    {
        cin >> arr[i];
        if (i > 0)
        {
            if (arr[i] > arr[i - 1] && arr[i] != arr[i - 1])
            {
                c++;
            }
            else
            {
                if (max < c)
                {
                    max = c;
                }
                c = 1;
            }
        }
    }
    if (max < c)
    {
        max = c;
    }
    cot(max);
}

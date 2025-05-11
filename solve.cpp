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
    loop
    {
        bool check = false;
        cit(n);
        string s;
        cin >> s;
        int i = 0, j = 0;
        forn(h, n)
        {
            if (s[h] == 'U')
            {
                j++;
            }
            else if (s[h] == 'D')
            {
                j--;
            }
            else if (s[h] == 'R')
            {
                i++;
            }
            else if (s[h]=='L')
            {
                i--;
            }
            if(i==j && i == 1){
                check = true;
                break;
            }
        }
    }
}

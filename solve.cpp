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

        int a[3], n;
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a + 3);
		n -= 2 * a[2] - a[1] - a[0];
		if (n < 0 || n % 3 != 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
    }
}
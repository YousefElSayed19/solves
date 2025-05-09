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
    const int size = 10;
    int target[size][size]; 

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int ring = min({i, size - 1 - i, j, size - 1 - j}) + 1;
            target[i][j] = ring;
        }
    }

    loop{
        string arr[10];
        forn(i,10){ 
            cin>>arr[i];
        }
        ld sum = 0;
        for(int i = 0 ; i<10;i++){
            for(int j = 0 ; j<10;j++){
                if(arr[i][j] == 'X'){
                    sum += target[i][j];
                }
            }
        }
        cot(sum);
    }
}

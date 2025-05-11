#include <bits/stdc++.h>

using namespace std;

#define Free_Palestine int main()
#define loop  \
    int t;    \
    cin >> t; \
    while (t--)
#define TRUE while(true)
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
        cit(n);
        int arr[n];
        forn(i,n){
            cin>>arr[i];
        }
        sortArr(arr,n);
        if(n<3){
            cot(-1);
        }else{
            bool check = true;
            for(int i = 0 ; i<n;i++){
                if(arr[i]==arr[i+1] && arr[i]==arr[i+2] && i+1 != n){
                    cot(arr[i]);
                    check=false;
                    break;
                }
            }
            if(check){
                cot(-1);
            }
        }
    }
}

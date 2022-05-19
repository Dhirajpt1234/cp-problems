#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define maxOfVec(a) *max_element(a.begin(), a.end())
#define minOfVec(a) *min_element(a.begin(), a.end())
#define mp make_pair
#define pb push_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define inputArr(arr) \
    fr(i, n)          \
    {                 \
        int x;        \
        cin >> x;     \
        arr.pb(x);    \
    }

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    int arr[4];
    fr(i, 4) cin >> arr[i];
    int first = INT_MIN, second = INT_MIN;

    int copy[4];
    for (int i = 0; i < 4; i++)
    {
        copy[i] = arr[i];
    }

    sort(copy, copy + 4);
    first = copy[3];
    second = copy[2];

    if ((max(arr[0], arr[1]) == first) && (max(arr[2], arr[3]) == second) || (max(arr[0], arr[1]) == second) && (max(arr[2], arr[3]) == first))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{

    fastIO;

    DhirajThorat();
    int t;
    cin >> t;
    while (t--)
    {
        Dhiraj();
    }

    return 0;
}
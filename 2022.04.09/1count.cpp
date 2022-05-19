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

inline string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

inline int getDigitsum(int n)
{
    int sum;
    for (sum = 0; n > 0; sum += n % 10, n /= 10)
        ;
    return sum;
}

inline int digitSumOfString(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - 48;
    }
    return sum;
}

void Dhiraj()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max = 0;
    int min = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[max] <= arr[i])
            max = i;

        if (arr[min] >= arr[i])
            min = i;
    }

    if (min > max)
    {
        cout << min + max - 1 << "\n";
    }
    else
    {
        cout << max + n - 1 - min - 1 << "\n";
    }
}

int main()
{

    fastIO;

    // int t;
    // cin >> t;
    // while (t--)
    // {
    Dhiraj();
    // }

    return 0;
}
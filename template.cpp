'''                 S H A N T A N U   K A U S H I K                 '''
//                  S H A N T A N U   K A U S H I K                 //

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define str string
#define bl bool
#define pll pair<ll, ll>
#define pii pair<int, int>
#define pss pair<string, string>
#define vec vector
#define fs first
#define ss second
#define vi vector<int>
#define vc vector<char>
#define vb vector<bl>
#define vll vector<ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define vvb vector<vb>
#define vvs vector<vector<string>>
#define vvc vector<vc>
#define vs vector<string>
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define pp pop
#define ps push
#define ump unordered_map
#define uset unordered_set
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fr(i, s, e) for (ll i = s; i < e; i++)
#define lr(i, s, e) for (ll i = s; i <= e; i++)
#define rl(i, e, s) for (ll i = e; i >= s; i--)
#define each(i, x) for (auto &i : x)
#define all(p) begin(p), end(p)
#define rev(p) sort(rbegin(p), rend(p))
#define out(x) cout << x << endl
#define out2(x) cout << x << " "
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define si(x) (ll) x.size()

bool isprime(ll n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (ll i = 3; i <= n / i; i += 2)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t__;
    cin >> t__;
    while (t__--)
    {
    }
    return 0;
}

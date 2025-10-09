// PriashisG
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

    // Typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> ordered_set;
/*
    greater<int> for large to small
    less_equal for not unique
    finding sz-th element --> os.find_by_order(sz);                           // O(log n)
    finding the number of elements smaller than x --> os.order_by_szey(x);   // O(log n)
    os.erase(x);
*/

    // Macros
#define PB push_back
#define IN insert
#define all(x) x.begin(), x.end()
#define trav(i, a) for (auto &i : a)
#define GCD __gcd
#define F first
#define S second
#define endl '\n'
#define LB lower_bound
#define UB upper_bound
#define DEBUG(i) cout << "DEBUG " << i << "\n";
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define GT(x) greater<x>()
#define setpre(n) fixed << setprecision(n)
#define SZ(x) x.size()

    // Debugger
template <typename T> void pv(vector<T> &a){
    for (T u : a) cout << u << ' ';
    cout << '\n';
}

template <typename T> void pv2(vector<vector<T>> &a){
    trav(aa, a) pv(aa);
}

template <typename T, typename U> void pvp( vector<pair<T, U>> &a){
    trav(p, a) cout << "(" << p.F << ", " << p.S << ") ";
    cout << '\n';
}

    // Constants
const ll MOD7 = 1e9 + 7;
const ll MOD9 = 998244353;
const ll INF = 1e18;

    // Custom Functions
void fast(){
    ios::sync_with_stdio(false); cin.tie(0);
}

ll LCM(ll a, ll b){
   return (a * b) / GCD(a, b);
}

    // Custom Comparator
bool cmp(const pair<ll, ll>& x, const pair<ll, ll>& y){
    if (x.F == y.F) return x.S < y.S;
    else return x.F > y.F;
}

    // Global Variables

void solve(ll tc){



}

int main(void){

    fast(); 
    // precal();

    // freopen("fenceplan.in", "r", stdin);
    // freopen("fenceplan.out", "w", stdout);

    ll t = 1;
    int i = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++) 
        solve(i);

}







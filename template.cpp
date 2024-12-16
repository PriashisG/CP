#include <bits/stdc++.h>
using namespace std;

// Type Names
typedef unsigned long long ull;
typedef long long ll;
typedef double dl;
typedef vector <int> vi;
typedef vector <ll> vl;
typedef vector <vi> vvi;
typedef vector <vl> vvl;
typedef pair <int, int> pii;
typedef pair <double, double> pdd;
typedef pair <ll, ll> pll;
typedef vector <pii> vii;
typedef vector <pll> vll;

// Macros
#define PB push_back
#define all(x) x.begin(), x.end()
#define trav(i, a) for (auto i : a)
#define GCD __gcd
#define MP make_pair
#define F first
#define S second
#define endl '\n'
#define sz(x) (int)x.size()
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

// DEBUGGER
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}
 
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
        for(auto it = v.begin(); it != v.end(); ++it) {
			if( it != v.begin() ) os << ", ";
			os << *it;
			}
		return os << "}";
}
 
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
	os << "[";
		for(auto it = v.begin(); it != v.end(); ++it) {
			if( it != v.begin() ) os << ", ";
			os << *it;
			}
		return os << "]";
}
 
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
	os << "[";
		for(auto it = v.begin(); it != v.end(); ++it) {
			if( it != v.begin() ) os << ", ";
			os << *it;
			}
		return os << "]";
}
 
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
	os << "[";
		for(auto it = v.begin(); it != v.end(); ++it) {
			if( it != v.begin() ) os << ", ";
			os << it -> first << " = " << it -> second ;
			}
		return os << "]";
}
 
#define dbg(args...) do {cerr << #args << " : "; func(args); } while(0)
 
void func () {
	cerr << endl;
}
 
template <typename T>
void func( T a[], int n ) {
	for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
	cerr << endl;
}
 
template <typename T, typename ... hello>
void func( T arg, const hello &... rest) {
	cerr << arg << ' ';
	func(rest...);
}

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll LCM(ll a, ll b){
    return (a*b)/ GCD(a,b);
}

void solve() {
	return;
}


int main(void) {
    fast();

    int t;
    cin >> t;
    while (t--) solve();
}

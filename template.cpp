#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll  				long long
#define ld  				long double
#define until(test)			int test;  cin >> test;  while(test--)
#define mod  				1000000007
#define inf  				1e18
#define ln  				"\n"

#define ff  				first
#define ss  				second
#define pb  				push_back
#define mp  				make_pair
#define pOfii  				pair<int,int>
#define pOfll  				pair<ll,ll>
#define vOfi  				vector<int>
#define mOfii  				map<int,int>
#define pbp  				priority_queue<int>
#define pbs  				priority_queue<int,vi,greater<int> >
#define ps(x,y)  			fixed << setprecision(y) << x
#define mk(arr, n, type)	type *arr=new type[n];
#define lb  				lower_bound
#define ub  				upper_bound
#define sz(x)  				int((x).size())
#define all(v)  			v.begin(), v.end();
#define vOfpOfii 			vector<pOfii>

#define fastio()			ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define setbits(x)  		__builtin_popcountll(x)
#define zrobits(x)  		__builtin_ctzll(x)

#define FOR(i, a, b)  		for(int i = (a), i < (b), ++i)
#define ROF(i, a, b)  		for(int i = (b)-1; i >= (a); --i)

#ifndef ONLIN_JUDGE
#define debug(x)			cerr << #x << " : "; custom::_print(x); cerr << endl;
#else
#define debug(x)
#endif

mt19937  					rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

namespace custom {
template <typename dataType> void _print(dataType x) { cerr << x; }
template <typename type1, typename type2> void _print(pair<type1, type2> p) { cerr << "{"; cerr << p.ff << ", "; cerr << p.ss; cerr << "}"; }
template <class containerType> void _print(vector<containerType> vec) { cerr << "["; for (containerType x : vec) { _print(x); cerr << " "; } cerr << "]"; }
template <class containerType> void _print(set<containerType> s) { cerr << "["; for (containerType x : s) { _print(x); cerr << " "; } cerr << "]" << endl;	}
template <class Type1, class Type2>	void _print(map<Type1, Type2> m) { cerr << "[ "; for (auto i : m) { _print(i); cerr << " "; } cerr << "]" << endl; }
template <class Type1, class Type2>	void _print(unordered_map<Type1, Type2> um) { cerr << "{ "; for (auto i : um) { _print(i); cerr << " "; } cerr << "}" << endl; }

template <typename dataType>
dataType gcd(dataType num1, dataType num2) {
	if (num1 == 0)		return num2;
	if (num2 == 0)		return num1;
	if (num1 == num2)	return num1;
	if (num1 > num2)		return gcd(num1 - num2, num2);
	return gcd(num1, num2 - num1);
}
}

void solve() {
	fastio();
}

int main() {
	// #ifndef ONLIN_JUDGE
	// 	freopen("Error.txt", "w", stderr);
	// #endif
	solve();
	return 0;
}
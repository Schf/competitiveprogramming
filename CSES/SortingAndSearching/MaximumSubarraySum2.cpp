#pragma GCC optimize ("O2")
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-result"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wsign-compare"

#include <bits/stdc++.h>
using namespace std;

#define trav(a, A) for (auto & a : A)
#define f first
#define s second

typedef long long ll;

const ll MOD = 1e+9+7;
const ll INFLL = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const ll MAXN = 1e+5+7;

int main ()
{
	ios_base::sync_with_stdio (0);
	cin.tie (0);
	ll tc = 1; //cin >> tc;
	while (tc--)
	{
		ll i, j, n, a, b, ub = 0, lb = 0;
		cin >> n >> a >> b;
		vector <ll> inp (n);
		for (i = 0; i < n; ++i)
		{
			cin >> inp[i];
			if (i < a) lb += inp[i];
			if (i < b) ub += inp[i];
		}
		ll mb = (ub + lb) / 2;
		while (ub - lb > 1)
		{
			
		}
	}

	return 0;
}



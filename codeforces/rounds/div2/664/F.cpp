#include <bits/stdc++.h>
using namespace std;

#define trav(a, A) for (auto & a : A)
#define f first
#define s second

typedef long long ll;

ll MOD = 1e+9+7;
const ll INFLL = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const ll MAXN = 1e+5+7;

int main ()
{
	ios_base::sync_with_stdio (0);
	cin.tie (0);
	ll i, j, n;
	cin >> n;
	vector <vector <ll>> inp (n, vector <ll> (2));
	trav (v, inp)
	{
		string s;
		cin >> s;
		sort (s.begin (), s.end ());
		cout << s << ' ';
		trav (c, s)
			v[0] += (c == 'B'),
			v[1] += (c == 'N');
		cout << v[0] << ' ' << v[1] << '\n';
	}

	

	return 0;
}


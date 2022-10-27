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
	ll i, j, n, m, xc, yc, k, ans = 0;
	cin >> n >> m >> xc >> yc >> k;
	for (i = 0; i < k; ++i)
	{
		ll dx, dy, mx, my;
		cin >> dx >> dy;
		if (dx > 0) mx = (n - xc)/dx;
		else if (dx < 0) mx = (xc - 1)/abs (dx);
		else mx = INF;
		if (dy > 0) my = (m - yc)/dy;
		else if (dy < 0) my = (yc - 1)/abs (dy);
		else my = INF;
		ll steps = min (mx, my);
		ans += steps;
		xc += steps * dx;
		yc += steps * dy;
	}
	cout << ans << '\n';

	return 0;
}


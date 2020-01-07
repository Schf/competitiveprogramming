#pragma GCC optimize ("O2")
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-result"
#pragma GCC diagnostic ignored "-Wunused-label"

#define DEBUG 0
#define dd if (DEBUG)

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define trav(a, A) for (auto & a : A)
#define all(a) (a).begin (), (a).end ()
#define rall(a) (a).rbegin (), (a).rend ()
#define sz(a) (int) (a).size ()
#define szl(a) (int) (a).length ()
#define FASTIO cin.sync_with_stdio (0); cin.tie (0); cin.exceptions (cin.failbit);

typedef long long ll;
typedef pair <int, int> pii;
#define f first
#define s second
#define mp(a, b) make_pair((a), (b))
typedef vector <int> vi;
#define pb(a) push_back ((a))

const ll MOD = 1e+9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int INFi = 0x3f3f3f3f;
const ll MAXN = 1e+6+7;

int main ()
{
    FASTIO;
    int i, j, n;
    cin >> n;
    vi A (n);
    trav (a, A)
        cin >> a;
    sort (rall (A));
    int sum = 0, tsum;
    for (i = 0, j = sz (A) - 1; i < sz (A) && i <= j; ++i, ++sum)
    {
        for (tsum = A[i]; tsum + A[j] <= 4 && j >= 0; tsum += A[j--]);
        dd trav (a, A)
            printf ("%d ", a);
        dd printf ("| i:% 3d, j:% 3d, sum:% 3d\n", i, j, sum);
    }
    cout << sum << "\n";

    return 0;
}

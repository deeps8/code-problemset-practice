#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	ll n;
	cin >> n;
	ll a[n];
	bool isAllEven = true;
	for (ll i = 0; i < n; ++i) {
		cin >> a[i];

		if (a[i] & 1) {
			isAllEven = false;
		}
	}

	if (isAllEven) {
		cout << -1 << endl;
		return;
	}

	// O E O E O E
	// 0 1 2 3 4 5
	ll op1 = 0;

	for (ll i = 0; i < n; ++i) {
		if (i % 2 == 0 && a[i] % 2 == 0) {		// 0 2 4 pr even
			++op1;
		}
		if (i % 2 != 0 && a[i] % 2 != 0) {		// 1 3 5 pr odd
			++op1;
		}
	}


	// E O E O E O
	// 0 1 2 3 4 5
	ll op2 = 0;

	for (ll i = 0; i < n; ++i) {
		if (i % 2 == 0 && a[i] % 2 != 0) {		// 0 2 4 pr odd
			++op2;
		}
		if (i % 2 != 0 && a[i] % 2 == 0) {		// 1 3 5 pr even
			++op2;
		}
	}

	ll op = min(op1, op2);
	cout << op << endl;

	// finding operations
	vector<pair<ll, ll>> v;

	if (op == op1) {
		// O E O E O E
		// 0 1 2 3 4 5
		for (ll i = 0; i < n; ++i) {
			if (i % 2 == 0) {						// 0 2 4 pr even
				if (a[i] % 2 == 0) {
					for (ll j = 0; j < n; ++j) {
						if (a[j] % 2 != 0 && i != j) {		// find next odd
							a[i] = a[i] ^ a[j];
							cout << i + 1 << " " << j + 1 << endl;
							break;
						}
					}
				}
			}
			if (i % 2 != 0) {						// 1 3 5 pr odd
				if (a[i] % 2 != 0) {
					for (ll j = 0; j < n; ++j) {
						if (a[j] % 2 != 0 && i != j) {		// find next odd
							a[i] = a[i] ^ a[j];
							cout << i + 1 << " " << j + 1 << endl;
							break;
						}
					}
				}
			}
		}
	} else {
		// E O E O E O
		// 0 1 2 3 4 5
		for (ll i = 0; i < n; ++i) {
			if (i % 2 == 0) {						// 0 2 4 pr odd
				if (a[i] % 2 != 0) {
					for (ll j = 0; j < n; ++j) {
						if (a[j] % 2 != 0 && i != j) {		// find next odd
							a[i] = a[i] ^ a[j];
							cout << i + 1 << " " << j + 1 << endl;
							break;
						}
					}
				}
			}
			if (i % 2 != 0) {						// 1 3 5 pr even
				if (a[i] % 2 == 0) {
					for (ll j = 0; j < n; ++j) {
						if (a[j] % 2 != 0 && i != j) {		// find next odd
							a[i] = a[i] ^ a[j];
							cout << i + 1 << " " << j + 1 << endl;
							break;
						}
					}
				}
			}
		}
	}
}

int main() {
	fastio();
	tc {
		solve();
	}
}
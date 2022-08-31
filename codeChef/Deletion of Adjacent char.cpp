#include<bits/stdc++.h>
using namespace std;

#define tc int t; cin>>t; while(t--)
#define int long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	string s;
	char c;
	cin >> s >> c;
	int n = s.length();

	string sans = "NO";

	vector<int> a;

	for (int i = 0; i < n; ++i) {
		if (s[i] == c) {
			a.push_back(i);
		}
	}

	for (int i = 0; i < a.size(); ++i) {
		int left = a[i];
		int right = n - a[i] - 1;

		if (left % 2 == 0 && right % 2 == 0) {
			sans = "YES";
			break;
		}
	}

	cout << sans << endl;
}

signed main() {
	fastio();
	tc {
		solve();
	}
}
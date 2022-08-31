#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	 long long A, B;
        cin >> A >> B;
        
        if (A >= B) {
            cout << A - B << "\n";
        }
        else if (B == (A | B)) {
            cout << "1\n";
        }
        else if (B == A + 1) {
            cout << "1\n";
        }
        else if (B == ((A + 1) | B)) {
            cout << "2\n";
        }
        else if (A + 2 == B) {
            cout << "2\n";
        }
        else if (B - 1 == (A | (B - 1))) {
            cout << "2\n";
        }
        else if (B + 1 == (A | (B + 1))) {
            cout << "2\n";
        }
        else
            cout << "3\n";
}

int main() {
	fastio();
	tc {
		solve();
	}
	return 0;
}



#include<bits/stdc++.h>
using namespace std;

int math_pairs (long long n) {
   // Return total valid pairs
	int pc = 1;
    long long x;
	double b,d,sq;
	for(long long i=2;i<n;i++){
        b = i*2+1;
		d = b*b + 4 * (i*i - i);
		sq = sqrt(d);
		if(floor(sq) == sq){
            x = (sq-b)/2;
            if(i+x<=n && i+x>=1){
                cout<<"[ "<<i<<" , "<<i+x<<" ]"<<endl;
		        pc++;
            }
        }
	}

	return pc;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        long long N;
        cin >> N;

        int out_;
        out_ = math_pairs(N);
        cout << out_;
        cout << "\n";
    }
}

/*
2
3
2
3
2
3
3
3
2
3
*/
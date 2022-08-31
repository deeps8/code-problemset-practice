#include<bits/stdc++.h>
using namespace std;

vector<int> calcXOR (int N, vector<int> A, int Q, vector<vector<int> > queries) {
   // your code here
   
   // compute the number of frequency/
	int prev=0,f=0,ans=0;
	vector<int> s_xor;

	for (int i = 1; i <=N; ++i){
		f = (N-i) + prev*(i-1);
		prev = f;
		if(f%2)
			s_xor.push_back(i-1);
	}

	int sn = s_xor.size();
	vector<int> res;

	for(int i=0;i<Q;i++){
		//update the vector with new value
		A[queries[i][0]-1] = queries[i][1];
		ans = 0;
		for(int j=0;j<sn;j++){
			ans = ans ^ A[s_xor[j]];
		}

		res.push_back(ans);
	}

	return res;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }
        int Q;
        cin >> Q;
        vector<vector<int> > queries(Q, vector<int>(2));
        for (int i_queries = 0; i_queries < Q; i_queries++)
        {
        	for(int j_queries = 0; j_queries < 2; j_queries++)
        	{
        		cin >> queries[i_queries][j_queries];
        	}
        }

        vector<int> out_;
        out_ = calcXOR(N, A, Q, queries);
        cout << out_[0];
        for(int i_out_ = 1; i_out_ < out_.size(); i_out_++)
        {
        	cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}
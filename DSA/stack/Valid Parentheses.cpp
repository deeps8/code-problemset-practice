#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

bool solve (string s) {
	if(s.length()%2)
            return false;
        stack<char> stk;
        for(int i=0;s[i];i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                stk.push(s[i]);
            }
            else if(s[i]==')' && !stk.empty() && stk.top()=='('){
                stk.pop();
            }
            else if(s[i]==']' && !stk.empty() && stk.top()=='['){
                stk.pop();
            }
            else if(s[i]=='}' && !stk.empty() && stk.top()=='{'){
                stk.pop();
            }
            else{
                return false;
            }
        }
        
        if(stk.size())
            return false;
        return true;
}

int main() {
	fastio();
	string s;
	cin>>s;

	bool res = solve(s);
	cout<<res;
}
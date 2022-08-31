#include<bits/stdc++.h>
using namespace std;


bool printResult(string s) {
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

    // for(){

        // loop ke ender code likhna hai tujhe ye

        if(printResult(str))
            cout<<"True\n";
        else
            cout<<"False\n";

    // }

}

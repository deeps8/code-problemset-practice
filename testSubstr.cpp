#include<bits/stdc++.h>
using namespace std;
int main(){
//write your code here..

    int n;
    cin>>n;

    string s,str="";
    for(int i=0;i<n;i++){
        cin>>s;
        str.append(s);
    }
    set<char> ms;
    int m = 0;
    for(int i=0;str[i];i++){
        if(ms.find(str[i]) != ms.end()){
            ms.insert(str[i]);
        }
        else{
            int s = ms.size();
            m = max(m,s);
            ms.clear();
            i--;
        }
    }

    cout<<m;

    return 0;
}


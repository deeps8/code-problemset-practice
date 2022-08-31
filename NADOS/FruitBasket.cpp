/*
	You are given a Fruit Basket, in this Basket some fruits are Rotten and some fruits are Fresh.
And you will be given a list of Fresh Fruits.
You have to separate the Fresh fruits from the rotten one's so that Fresh fruits does not get rotten.
You have to add a separator tag <S> and </S> between fresh & rotten fruits.

If some fruits overlap in the list of Fresh Fruits, wrap them in a Single Separator only.
If two separators are consecutive, you should combine them.

Constraints

1 <= Basket.length <= 1000
0 <= FreshList.length <= 100
1 <= FreshList[i].length <= 1000
Basket and FreshList[i] consist of English letters and digits.

Format

Input

PepCoding
3
Pep
Cod
ing

Output

 <S>PepCoding </S>

Example

Sample Input

PepCoding
3
Pep
Cod
ing

Sample Output

PepCoding


*/
#include <bits/stdc++.h>
using namespace std;

string addSeprator(string bs,vector<string> fl){
    string temp = bs;
    vector<int> start;
    for(int i=0;i<fl.size();i++){
        int f = temp.find(fl[i]); 
        if(f>=0){
            temp.insert(f+fl[i].size(),"</S>");
            temp.insert(f,"<S>");
        }
    }

    for(int i=0;temp[i];i++){
        if(temp.substr(i,7)=="</S><S>"){
            temp.erase(i,7);
        }
    }

    return temp;
}

int main()
{
    string Basket;
    cin>>Basket;

    int n;
    cin>>n;

    string a;
    vector<string> FreshList;
     for(int i=0 ;i<n; i++)
        {
            cin>>a;
            FreshList.push_back(a);
        }
    string s = addSeprator(Basket,FreshList);
    cout<<s;

    return 0;
}

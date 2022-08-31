/*
	You are given a string (let's say s ) that is shuffled internally. The string contains at most 9 words and those words are space-separated. Each word consists of 3 parts, some numeric value(let's say x), a hyphen, and some alphabetic characters(the order of 3 parts will always be same). It is guaranteed that the numeric value (x) of each word will be distinct. 

Example of String: 24-amazing 7-Pepcoders 11-are

You have to return a string that contains all words of a given string but in a sorted manner. Sorting will be done on the basis of increasing the order the numeric value (x) of each word.
The expected result should consist of only the alphabetic part of each word and the space between each of them.

Expected result of given string: Pepcoders are amazing

Constraints

* 2 <= s.length <= 200
* s consists of lowercase and uppercase
* English letters, spaces, and digits from 1 to 9.
* The number of words in s is between 1 and 9.
* The words in s are separated by a single space.
* s contains no leading or trailing spaces.
* The numeric part of each word present in a string will be distinct.
* Order of each word will be like 24-Pepcoders. (First number then hyphen then alphabetic characters)

Format

Input

Input is managed for you.

Output

Output is managed for you.

Example

Sample Input

17-are 6-Pepcoders 89-amazing

Sample Output

Pepcoders are amazing


*/

#include<iostream>
#include<vector>
#include<map>
#include <sstream>

using namespace std;

vector<string> split(string str,char del=' '){
	vector<string> res;
	int start=0,i=0;
	for(;str[i];i++){
		if(str[i]==del && i!=start){
			res.push_back(str.substr(start,i-start));
			start = i+1;
		}
	}
	res.push_back(str.substr(start,i));
	
	return res;
	
}

int main(){
	
	string s;
	getline(cin,s,'\n');
	vector<string> res = split(s,' ');
	map<int,string> mp;

	for(int i=0;i<res.size();i++){
		vector<string> temp = split(res[i],'-');
        stringstream ss(temp[0]);
        int n = 0;
        ss>>n;
		mp[n] = temp[1];		
	}

	for(auto m:mp){
		cout<<m.second<<" ";
	}
	
	
	return 0;
}

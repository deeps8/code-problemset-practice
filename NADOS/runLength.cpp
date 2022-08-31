#include <bits/stdc++.h>
using namespace std;
 
void runLength(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++) {
        // Count occurrences of current character
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        // Print character and its count
        cout << str[i] << count;
    }
}
int main()
{
	string str;
	cout<<"Run Lenght Encoding Scheme\n";
	cout<<"Enter a pattern : ";
	cin>>str;
    
    
    cout<<"Output : ";
	runLength(str);
    return 0;
}
